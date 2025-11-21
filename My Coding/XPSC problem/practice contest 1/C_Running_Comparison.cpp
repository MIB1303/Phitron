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
        int count = 0;
        vector<int> va(n);
        vector<int> vb(n);
        for (int i = 0; i < n; i++)
        {
            cin >> va[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vb[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (vb[i] <= 2 * va[i] && va[i] <= 2 * vb[i])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}

// if (B[i] <= 2*A[i] && A[i] <= 2*B[i])
//     count++;