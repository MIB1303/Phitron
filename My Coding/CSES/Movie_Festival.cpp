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
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second < b.second);
}
void solved_by_keyboardJoddha()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vm(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vm[i].first >> vm[i].second;
    }
    sort(vm.begin(), vm.end(), cmp);

    int i = 0;
    int endlm = -1;
    int ans = 0;
    while (i < n)
    {
        if (vm[i].first >= endlm)
        {
            ans++;
            endlm = vm[i].second;
            i++;
        }
        else i++;
    }
    cout << ans;
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