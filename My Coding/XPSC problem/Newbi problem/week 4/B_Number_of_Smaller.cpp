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
    int n, m;
    cin >> n >> m;
    vi v1(n);
    vi v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int l = 0, r = 0, cnt = 0;
    while (r < m)

    {
        if ((l < n) && v1[l] < v2[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout << cnt << " ";
            r++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
