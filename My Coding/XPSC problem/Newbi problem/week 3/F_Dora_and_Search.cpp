// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
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
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        while (l <= r)
        {
            if (a[l] == mn)
            {
                l++;
                mn++;
            }
            else if (a[l] == mx)
            {
                l++;
                mx--;
            }
            else if (a[r] == mn)
            {
                r--;
                mn++;
            }
            else if (a[r] == mx)
            {
                r--;
                mx--;
            }
            else
            {
                break;
            }
        }
        if (l <= r)
        {
            cout << l + 1 << " " << r + 1 << nl;
        }
        else
        {
            cout << -1 << nl;
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