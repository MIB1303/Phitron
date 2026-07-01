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
    int n, t;
    cin >> n >> t;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = n / 2; i < n; i++)
        {
            if (v[i] < mid)
            {
                cnt += (mid - v[i]);
            }
            else
                cnt += 0;
        }
        return cnt <= t;
    };

    sort(v.begin(), v.end());

    ll l = 1, r = 2e9, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
