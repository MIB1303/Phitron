// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303(int w)
{
    int n, t;
    cin >> n >> t;
    vector<priority_queue<int>> a(n);
    for (int i = 0; i < t; i++)
    {
        int q, r;
        cin >> q >> r;

        if (q == 0)
        {
            int x;
            cin >> x;
            a[r].push(x);
        }
        else if (q == 1)
        {
            if (!a[r].empty())
            {
                cout << a[r].top() << nl;
            }
        }
        else if (q == 2)
        {
            if (!a[r].empty())
            {
                a[r].pop();
            }
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
