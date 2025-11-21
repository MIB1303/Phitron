#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int rank = n + 1;
        for (int i = 0; i <= k; i++)
        {
            int newX = x + 100 * i;
            int greater = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] > newX)
                    greater++;
            }
            int curank = greater + 1;
            rank = min(rank, curank);
        }
        cout << rank << endl;
    }
    return 0;
}
