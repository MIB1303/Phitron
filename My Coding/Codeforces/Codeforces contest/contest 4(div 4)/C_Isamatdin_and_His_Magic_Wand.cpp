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
        int n, flag1 = 0, flag2 = 0;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
            {
                flag1 = 1;
            }
            else
                flag2 = 1;
        }
        if ((flag1 == 1) && (flag2 == 1))
        {
            sort(v.begin(), v.end());
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
