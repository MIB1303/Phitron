// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

bool isVowel(char ch)
{
    ch = toupper(ch);
    return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
void solve_by_MIB1303()
{

    int T;
    cin >> T;

    string target = "CODETOWN";

    while (T--)
    {
        string S;
        cin >> S;

        bool pos = true;
        for (int i = 0; i < 8; i++)
        {
            bool sVowel = isVowel(S[i]);
            bool tVowel = isVowel(target[i]);
            if (sVowel != tVowel)
            {
                pos = false;
                break;
            }
        }

        if (pos == true)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}