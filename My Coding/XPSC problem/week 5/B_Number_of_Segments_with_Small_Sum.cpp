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
    int n;
    ll x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = 0;
    ll sum = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= x)
        {
            ans +=  r - l + 1;
        }
        else
        {
            while (sum > x)
            {
                sum -= v[l];
                l++;
                if (sum <= x)
                {
                    ans +=  r - l + 1;
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
