#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char x;
    cin >> a >> x >> b;
    if (b == 8)
        cout << a + 1 << x << 1;
    else
        cout << a << x << b + 1;
    return 0;
}