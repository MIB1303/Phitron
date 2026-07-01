// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define nl endl

void solve_by_MIB1303()
{
    ll n, x;
    cin >> n >> x;
    pbds<ll> st;
    for (ll i = 1; i <= n; i++)
        st.insert(i);

    ll idx = 0;
    vii a;
    while (!st.empty())
    {
        idx = (idx + x) % st.size();
        auto it = st.find_by_order(idx);
        a.push_back(*it);
        st.erase(it);
    }

    for (ll i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
