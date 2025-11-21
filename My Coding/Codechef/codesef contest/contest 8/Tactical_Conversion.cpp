// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i+1 < s.size(); i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Yes" << nl ;
        }
        else cout << "No" << nl ;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}