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
    int n, m, k;
    cin >> n >> m >> k;
    vii va(n);
    for (int i = 0; i < n; i++)
        cin >> va[i];
    sort(va.begin(), va.end());
    multiset<int> vk;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vk.insert(x);
    }
    int cnt = 0;
    for (auto x : va)
    {
        auto it = vk.lower_bound(x-k);
        if (it != vk.end() && *it <= x + k )
        {
            cnt++;
            vk.erase(it);
        }
        
    }
    cout<< cnt ;
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