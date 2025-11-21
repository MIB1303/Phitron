#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c, d, K;
        cin >> a >> b >> c >> d >> K;

        int min_steps = abs(a - c) + abs(b - d);

        if (K >= min_steps && (K - min_steps) % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
