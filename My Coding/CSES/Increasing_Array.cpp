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
    ll n;
    cin >> n;
    vii v(n);
    for (ll i= 0; i < n; i++)
        cin >> v[i];
    ll move = 0;
    for (ll i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            move += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << move;
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