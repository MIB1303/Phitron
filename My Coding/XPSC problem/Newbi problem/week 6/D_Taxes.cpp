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
bool prime(int n)
{
    int flag = true;
    if (n == 1)
        cout << "Not prime" << nl;

    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
void solve_by_MIB1303()
{
    int n;
    cin >> n;
    if (prime(n))
        cout << 1 << nl;
    else if (n % 2 == 0)
        cout << 2 << nl;
    else
    {
        if (prime(n - 2))
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
