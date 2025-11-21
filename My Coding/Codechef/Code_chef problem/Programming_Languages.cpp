#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        int ans = 0;
        if ((a == a1 && b == b1) || (a == b1 && b == a1))
            ans = 1;
        if ((a == a2 && b == b2) || (a == b2 && b == a2))
            ans = 2;
        cout << ans << endl;
    }
    return 0;
}