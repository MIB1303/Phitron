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
        int k, n, m;
        cin >> k >> n >> m;
        vi a(n);
        vi b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int l = 0, r = 0;
        vi final;
        bool flag = true;
        while (l != n || r != m)
        {
            if (l != n && a[l] == 0)
            {
                final.push_back(0);
                k++;
                l++;
            }
            else if (r != m && b[r] == 0)
            {
                final.push_back(0);
                k++;
                r++;
            }
            else if (l != n && a[l] <= k)
            {
                final.push_back(a[l++]);
            }
            else if (r != m && b[r] <= k)
            {
                final.push_back(b[r++]);
            }
            else
            {
                cout << -1 << nl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int x : final)
            {
                cout << x << " ";
            }
            cout << nl;
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
