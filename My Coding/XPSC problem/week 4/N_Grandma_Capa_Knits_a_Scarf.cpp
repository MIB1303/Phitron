// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int res = INT_MAX;

        for (char c = 'a'; c <= 'z'; c++)
        {
            bool flag = 1;
            int l = 0, r = n - 1, cnt = 0;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == c)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == c)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }

            if (flag == 1)
            {
                res = min(res, cnt);
            }
        }

        if (res == INT_MAX)
            cout << -1 << nl;
        else
            cout << res << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
