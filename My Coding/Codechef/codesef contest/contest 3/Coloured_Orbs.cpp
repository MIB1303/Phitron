#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, b;
    cin >> r >> b;
    if (r < b)
    {
        cout << (r * 5) + (b - r) * 2;
    }
    else if (b < r)
    {
        cout << (b * 5) + (r - b) * 1;
    }
    else
        cout << 5 * r;
    return 0;
}