#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    double sum = 0;
    while (t--)
    {
        double ql, y;
        cin >> ql >> y;
        sum += (ql * y);
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}