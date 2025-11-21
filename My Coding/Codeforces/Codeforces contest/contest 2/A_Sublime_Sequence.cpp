#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, s;
        cin >> x >> s;
        if (s % 2 == 0)
            cout << 0 << endl;
        else if (s % 2 == 1)
        {
            cout << x << endl;
        }
    }
    return 0;
}