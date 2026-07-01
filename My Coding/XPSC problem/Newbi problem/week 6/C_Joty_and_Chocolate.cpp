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

ll LCD(ll x, ll y)
{
    return (x / __gcd(x, y) * y);
}
void solve_by_MIB1303()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = (n / a )* p, y = (n / b) * q, vondo = (n / LCD(a, b));
    ll ans = ((x + y )- (vondo * (p + q))) + vondo * max(p, q);
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
