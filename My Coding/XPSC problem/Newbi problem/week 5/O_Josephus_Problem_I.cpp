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
    cin >> n;
    list<int> l;
    for (int i = 1; i <= n; i++)
    {
        l.push_back(i);
    }
    vi a;
    auto it = l.begin();
    bool flag = false;
    while (!l.empty())
    {
        if (flag)
        {
            a.push_back(*it);
            it = l.erase(it);
            if (it == l.end())
            {
                it = l.begin();
            }
        }
        else
        {
            it++;
            if (it == l.end())
            {
                it = l.begin();
            }
        }
        flag = !flag;
    }

    for (int i = 0; i < a.size(); i++)
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
