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
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    vi a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    while (l < n && r < m)
    {
        int cur = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && a[l] == cur)
        {
            cnt1++;
            l++;
        }
        while (r < m && cur > b[r])
        {
            r++;
        }
        while (r < m && b[r] == cur)
        {
            cnt2++;
            r++;
        }
        ans += (1ll * cnt1 * cnt2);
    }
    cout << ans << nl;
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
