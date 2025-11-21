
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303(int w)
{
    int t;
    cin >> t;
    multiset<int> s;
    while (t--)
    {

        int x, y;

        cin >> x >> y;

        if (x == 1)
        {
            s.insert(y);
        }
        else if (x == 2)
        {
            s.erase(y);
        }
        else if (x == 3)
        {
            if (s.find(y) != s.end())
                cout << "Yes" << nl;
            else
                cout << "No" << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
