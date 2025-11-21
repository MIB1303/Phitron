#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define sz(x) (x).size()
#define arrsz(x) (sizeof(x) / sizeof(x[0]))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define HA cout << "YES" << nl
#define NA cout << "NO" << nl

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const long long INF = 1e9;
const ll NEG_INF = -4e18;

void Solve(int tc)
{
    int n, q;
    cin >> n >> q;
    map<int, int> mp0, mp1, mp2;

    int val;
    cin >> val;
    if (val == 0)
        mp0[1]++;
    else if (val == 1)
        mp1[1]++;
    else
        mp2[1]++;

    for (int i = 2; i <= n; i++)
    {
        cin >> val;
        mp0[i] += mp0[i - 1];
        mp1[i] += mp1[i - 1];
        mp2[i] += mp2[i - 1];

        if (val == 0)
            mp0[i]++;
        else if (val == 1)
            mp1[i]++;
        else
            mp2[i]++;
    }
    // cout << mp0[1] << nl;
    while (q--)
    {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        int l, r;
        cin >> l >> r;
        // l--;r--;
        cnt0 = mp0[r] - mp0[l - 1];
        cnt1 = mp1[r] - mp1[l - 1];
        cnt2 = mp2[r] - mp2[l - 1];

        if (cnt0 == 0)
            cout << 0 << nl;
        else if (cnt1 == 0)
            cout << 1 << nl;
        else if (cnt2 == 0)
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        Solve(tc);
    }
    return 0;
}