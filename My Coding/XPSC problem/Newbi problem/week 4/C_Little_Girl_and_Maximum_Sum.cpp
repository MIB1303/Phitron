// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303(int t)
{
    int n, q;
    cin >> n >> q;
    vi v(n), d(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        d[l] += 1;
        d[r + 1] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i] + d[i - 1];
    }
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += d[i] * v[i];
    }
    cout << 1ll * ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
