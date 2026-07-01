// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vii vector<long long>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define nl endl
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solved_by_keyboardJoddha()
{

    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        auto it = ms.upper_bound(t);
        if (it == ms.begin())
        {
            cout << -1 << nl;
        }
        else 
        {
            it--;
            cout<< *it << nl;
            ms.erase(it);
        }
    }
}

int32_t main()
{
    int tc = 1, w = 1;
    // cin>>tc;
    while (tc--)
    {
        // cout<<"Case "<<w++<<": ";
        solved_by_keyboardJoddha();
    }
}