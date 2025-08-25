#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<unordered_set<int>> adj_list(n);
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].insert(b);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c, d;
        cin >> c >> d;
        if (c == d)
        {
            cout << "YES" << "\n";
        }
        else if (adj_list[c].count(d))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}