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
        vi v(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        if (v[0] == v[1])
        {
            for (int i = 2; i < n; i++)
            {
                if (v[1] > v[i])
                {
                    swap(v[1], v[i]);
                    break;
                }
            }
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << nl;
        }
        else
        {
            for (auto x : v)
            {
                cout << x << " ";
            }
            cout << nl;
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
