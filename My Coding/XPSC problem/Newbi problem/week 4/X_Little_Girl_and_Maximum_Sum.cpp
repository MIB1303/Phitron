// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl endl

void solve_by_MIB1303(int t)
{
    int n, q;
    cin >> n >> q;
    vi v(n), d(n + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l] += 1;
        if (r + 1 < n) d[r + 1] -= 1;
    }

    for (int i = 1; i < n; i++)
        d[i] += d[i - 1];

    
    sort(d.begin(), d.begin() + n, greater<int>());

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += 1LL * v[i] * d[i];

    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
        solve_by_MIB1303(t);

    return 0;
}
