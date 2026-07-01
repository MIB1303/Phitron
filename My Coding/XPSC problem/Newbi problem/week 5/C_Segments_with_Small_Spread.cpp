// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303()
{
    ll n;
    ll x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    multiset<long long> ml;
    ll l = 0, r = 0;
    ll ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();
        if (mx - mn <= x)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                ll mn1 = *ml.begin();
                ll mx1 = *ml.rbegin();
                if (mx1 - mn1 <= x)
                    break;

                ml.erase(ml.find(v[l]));
                l++;
                ll mn2 = *ml.begin();
                ll mx2 = *ml.rbegin();
                if (mx2 - mn2 <= x)
                {
                    ans += (r - l + 1);
                }
            }
        }
        r++;
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
