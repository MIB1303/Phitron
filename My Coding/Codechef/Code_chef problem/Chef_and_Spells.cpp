#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int p = max({a + b, a + c, b + c});
        cout << p << endl;
    }

    return 0;
}
