// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vii vector<long long>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl; // row = y
#define nl endl                  // col = x
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solved_by_keyboardJoddha()
{
    ll x,y;
    cin>>x>>y;
    if (x<y)
    {
        ll ans ;
        if (y % 2 != 0)
            ans = (y * y) - x + 1;
        else
            ans = ((y - 1) * (y - 1)) + x;
        cout << ans << endl;
        return;
    }
    else
    {
        ll ans ;
        if (x % 2 != 0)
            ans = ((x - 1) * (x - 1)) + y;
        else
            ans = (x * x) - y + 1;
        cout << ans << nl;
        return;
    }
}

int32_t main()
{
    int tc = 1, w = 1;
    cin >> tc;
    while (tc--)
    {
        // cout<<"Case "<<w++<<": ";
        solved_by_keyboardJoddha();
    }
}