#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val = 0;
        int idx;
        int ar[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            if (ar[i] > val)
            {
                val = ar[i];
                idx = i;
            }
        }

        cout << idx << endl;
    }

    return 0;
}