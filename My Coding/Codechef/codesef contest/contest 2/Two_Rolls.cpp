#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((2 * y) <= (50 - x) && (50 - x) <= (2 * y) + 10)
        {
            cout << "Yes" << endl;
        }
        else
            cout<< "No" << endl ;
    }
    return 0;
}