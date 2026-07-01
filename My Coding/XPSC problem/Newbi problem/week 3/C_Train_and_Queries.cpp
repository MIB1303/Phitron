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
        int n, q;
        cin >> n >> q;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l)) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO" << nl;
            }
            else
            {
                int ss, es;
                ss = *mp[l].begin();
                es = *mp[r].rbegin();
                if (ss < es)
                    cout << "YES" << nl;
                else
                    cout << "NO" << nl;
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