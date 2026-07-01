// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define nl endl
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vii v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0, g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, v[i]);
        }
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                flag = false;
            }
        }
        if (flag)
        {
            ans = g1;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % g2 == 0)
                {
                    flag = false;
                }
            }
            if (flag)
            {
                ans = g2;
            }
        }
        cout << ans << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
