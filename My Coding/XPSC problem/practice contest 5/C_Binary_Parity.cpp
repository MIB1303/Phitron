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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b = "";
        if (n == 0)
            b = "0";

        while (n > 0)
        {
            b += char((n % 2) + '0');
            n /= 2;
        }
        reverse(b.begin(), b.end());
        int sum = 0;
        for (int i = 0; i < b.size(); i++)
        {
            sum += b[i];
        }
        if (sum % 2 == 0)
            cout << "EVEN" << nl;
        else
            cout << "ODD" << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
