#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, int>> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        vector<ll> ans(n);

        for (int j = 0; j < n; ++j)
        {
            if (j == 0 || j == n - 1)
            {
                ans[v[j].second] = -1;
                continue;
            }

            ll l_mid = (v[j - 1].first + v[j].first) / 2;
            ll r_mid = (v[j].first + v[j + 1].first) / 2;

            ll L = l_mid + 1;
            ll R = r_mid;

            ll count = R - L + 1;
            if (count < 0)
                count = 0;

            ans[v[j].second] = count;
        }

        for (int i = 0; i < n; ++i)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();
    return 0;
}
