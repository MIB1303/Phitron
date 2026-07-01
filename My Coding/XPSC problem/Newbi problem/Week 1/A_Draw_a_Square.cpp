#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, u, d;
        cin >> l >> r >> u >> d;
        if (l == r && r == u && u == d && d == l)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}