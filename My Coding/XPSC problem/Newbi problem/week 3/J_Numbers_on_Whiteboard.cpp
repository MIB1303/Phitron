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
 
        vi a;
        for (int i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        vector<pii> v;
        int last = a[n - 1];
 
        for (int i = n - 2; i >= 0; i--)
        {
            v.push_back({last, a[i]});
            last = (last + a[i] + 1) / 2;
        }
        cout << last << nl;
        for (auto &p : v)
        {
            cout << p.first << " " << p.second << nl;
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