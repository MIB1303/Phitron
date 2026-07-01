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

    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = v[l].first + v[r].first;
        if (sum == x)
        {
            if (v[l].second <= v[r].second)
                cout << v[l].second << " " << v[r].second << nl;
            else
                cout << v[r].second << " " << v[l].second << nl;
            return;
        }
        else if (sum < x)
            l++;
        else
            r--;
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
