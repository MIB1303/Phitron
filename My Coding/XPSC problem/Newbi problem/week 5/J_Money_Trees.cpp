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
        ll n, x;
        cin >> n >> x;

        vii f(n + 1), h(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> f[i];
        for (int i = 1; i <= n; i++)
            cin >> h[i];

        ll ans = 0;
        ll ri = 1;
        for (ll i = 2; i <= n + 1; i++)
        {
            if (i == n + 1 || h[i - 1] % h[i] != 0)
            {
                ll sum = 0;
                ll l = ri;
                for (ll r = ri; r <= i - 1; r++)
                {
                    sum += f[r];
                    while (sum > x)
                    {
                        sum -= f[l];
                        l++;
                    }
                    ans = max(ans, r - l + 1);
                }
                ri = i;
            }
        }

        cout << ans << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();
    return 0;
}
