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
    int n, x;
    cin >> n >> x;
    vector<int> wi(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wi[i];
    }
    sort(wi.begin(), wi.end());
    int l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
        if (wi[l] + wi[r] <= x)
        {
            ans++;
            l++;
            r--;
        }
        else
        {
            ans++;
            r--;
        }
    }
    cout << ans << nl;
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