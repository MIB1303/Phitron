#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        double new_price = s * (1 + c / 100.0);

        if (new_price >= a && new_price <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}