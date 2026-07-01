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
    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> lengths;

    lights.insert(0);
    lights.insert(x);
    lengths.insert(x);

    for (int i = 0; i < n; i++)
    {
        int pos;
        cin >> pos;
        auto it = lights.upper_bound(pos);
        int right = *it;
        int left = *prev(it);

        lengths.erase(lengths.find(right - left));
        lengths.insert(pos - left);
        lengths.insert(right - pos);
        lights.insert(pos);

        cout << *lengths.rbegin() << " ";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}