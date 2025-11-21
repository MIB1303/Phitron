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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        if (v[0] > x)
        {
            cout << *v.begin() - 1 << nl;
            continue;
        }
        if (v.back() < x)
        {
            cout << n - v.back() << nl;
            continue;
        }
        auto it = lower_bound(v.begin(), v.end(), x);
        auto jt = it;
        jt--;

        ll lef = *jt, rgt = *it;
        ll mid = (lef + rgt) / 2;
        ll t1 = mid - lef;
        ll t2 = rgt - mid;

        cout << min(t1, t2) << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
