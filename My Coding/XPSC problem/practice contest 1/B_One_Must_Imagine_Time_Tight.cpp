#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    int d = min(n, m);
    cout << min(d, x);
    return 0;
}