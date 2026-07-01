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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll sum = 0;
    ll l = 0;
    ll ans = LLONG_MAX;

    for (ll r = 0; r < n; r++)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }
    }

    if (ans == LLONG_MAX)
        cout << -1 << nl;
    else
        cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
