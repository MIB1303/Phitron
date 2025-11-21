#include <bits/stdc++.h>
using namespace std;
bool lucky_number(int lc)
{
    if (lc == 4 || lc == 7)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    long long int n;
    cin >> n;
    int lucky_count = 0;
    while (n != 0)
    {
        int ln = n % 10;
        n = n / 10;
        if (ln == 4 || ln == 7)
        {
            lucky_count++;
        }
    }
    bool lucky = lucky_number(lucky_count);
    if (lucky)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// bool LuckyNumber(int num) {

//     string s = to_string(num);
//     for (char ch : s) {
//         if (ch != '4' && ch != '7') {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     string n;
//     cin >> n;

//     int luckyCount = 0;

//     for (char ch : n) {
//         if (ch == '4' || ch == '7') {
//             luckyCount++;
//         }
//     }

//     if (LuckyNumber(luckyCount)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
