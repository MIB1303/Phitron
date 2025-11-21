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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            cout << "NO" << nl;
            continue;
        }
        int cnt = 0;
        bool flag = true;
        for (char ch : s)
        {
            if (ch == '1')
            {
                cnt = q;
            }
            else
            {
                if (cnt == 0)
                {
                    flag = false;
                    break;
                }
                else
                {
                    cnt--;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
