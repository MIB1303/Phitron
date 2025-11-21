// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define nl '\n'

void solve_by_MIB1303()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            long long sum = v[i].first + v[l].first + v[r].first;
            if (sum == x)
            {
                vector<int> c = {v[i].second, v[l].second, v[r].second};
                sort(c.begin(), c.end());
                cout << c[0] << " " << c[1] << " " << c[2] << nl;
                return;
            }
            else if (sum < x)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();
    return 0;
}
