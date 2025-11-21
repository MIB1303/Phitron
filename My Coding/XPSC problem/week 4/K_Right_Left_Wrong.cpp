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
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            a[i] = a[i - 1] + x;
        }
        string s;
        cin >> s;
 
        ll res = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            while (l < n && s[l] == 'R')
            {
                l++;
            }
            while (r >= 0 && s[r] == 'L')
            {
                r--;
            }
            if (l < r)
            {
                res += a[r + 1] - a[l];
                l++;
                r--;
            }
        }
        cout << res << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
