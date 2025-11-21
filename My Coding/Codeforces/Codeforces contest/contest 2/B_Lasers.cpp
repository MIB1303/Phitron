#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int ara[n], arb[m];
        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arb[i];
        }
        if (n == m)
            cout << n * 2 << endl;
        else
            cout << m + n << endl;
    }

    return 0;
}