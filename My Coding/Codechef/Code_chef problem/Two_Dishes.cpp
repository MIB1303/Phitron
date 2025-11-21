#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int flag = 0;

        for (int type1 = 0; type1 <= min(a, b); ++type1)
        {
            int remainingVeg = b - type1;
            int type2 = min(remainingVeg, c);
            
            if (type1 + type2 >= n)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1 )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

