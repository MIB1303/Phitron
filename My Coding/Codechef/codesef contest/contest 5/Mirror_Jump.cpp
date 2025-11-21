#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int d = abs(n- k);
        int m = abs(n - (n + 1 - k)) + 1;
        cout << min(d,m) << endl;
    }
    return 0;
}