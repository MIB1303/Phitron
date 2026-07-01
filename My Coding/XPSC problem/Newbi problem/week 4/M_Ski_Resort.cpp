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
        int n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll res = 0;
        ll l = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                l++;
            }
            else
            {
                if (l >= k)
                {
                    res += (l - k + 1) * (l - k + 2) / 2;
                }
                l = 0;
            }
        }
        if (l >= k)
        {
            res += (l - k + 1) * (l - k + 2) / 2;
        }
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
