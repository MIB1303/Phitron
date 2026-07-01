// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define nl endl

void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int x = -1, y = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                int rem = v[j] % v[i];
                if (rem != 0 && rem % 2 == 0)
                {
                    x = i;
                    y = j;
                    break;
                }
            }
            if (x != -1 && y != -1)
                break;
        }

        if (x != -1 && y != -1)
            cout << v[x] << " " << v[y] << nl;
        else
            cout << -1 << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
