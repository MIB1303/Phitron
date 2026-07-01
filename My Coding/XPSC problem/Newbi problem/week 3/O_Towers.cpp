// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
void solve_by_MIB1303()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<int> ms;
    for (auto x : v)
    {
        auto it = ms.upper_bound(x);
        if (it == ms.end())
            ms.insert(x);
        else
        {
            ms.erase(it);
            ms.insert(x);
        }
    }
    cout << ms.size() << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}