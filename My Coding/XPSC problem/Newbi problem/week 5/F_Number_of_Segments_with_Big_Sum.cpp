// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define nl endl
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve_by_MIB1303()
{
    int n;
    ll s;
    cin >> n >> s;
    vii a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll sum = 0;
    int left = 0;
    ll count = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum >= s)
        {
            count += (n - right);
            sum -= a[left];
            left++;
        }
    }

    cout << count << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
