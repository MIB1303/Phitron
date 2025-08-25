#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> a_t(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        a_t[a].push_back(b);
        a_t[b].push_back(a);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int node;
        cin >> node;

        if (a_t[node].empty())
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(a_t[node].begin(), a_t[node].end(), greater<int>());
            for (int bip : a_t[node])
            {
                cout << bip << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}