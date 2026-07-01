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
     int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1), prefix(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
        ll total = prefix[n];
        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;
            ll sum = prefix[r] - prefix[l - 1];
            ll b = r - l + 1;
            ll sum1 = total - sum + b * k;
            if (sum1 % 2 == 1)
            {
                cout<< "YES" << nl;
            }
            else
            {
                cout<< "NO" << nl;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
