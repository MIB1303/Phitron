
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define loop(start, end, var) for (int var = (start); var <= (end); var++)
#define rsORT(var) sort(var.rbegin(), var.rend())
#define sORT(var) sort(var.begin(), var.end())
#define testCase \
    {            \
    }            \
    int tc;      \
    cin >> tc;   \
    while (tc--)
#define tInt(var) \
    int var;      \
    cin >> var;
#define tLL(var) \
    ll var;      \
    cin >> var;
#define tStr(var) \
    string var;   \
    cin >> var;

using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    fastIO();

    testCase
    {
        tInt(n);
        vector<int> a(n + 1);
        loop(1, n, i)
        {
            cin >> a[i];
        }

        map<int, int> pos;
        loop(1, n, i)
        {
            pos[a[i]] = i;
        }

        ll ans = 0;
        for (int i = n; i >= 1; i--)
        {
            int prsntPos = pos[i];

            int leftcnt = 0, rightcnt = 0;

            for (int j = 1; j < prsntPos; j++)
            {
                if (a[j] < i)
                    leftcnt++;
            }

            for (int j = prsntPos + 1; j <= n; j++)
            {
                if (a[j] < i)
                    rightcnt++;
            }

            ans += min(leftcnt, rightcnt);
        }
        cout << ans << nl;
    }
    return 0;
}