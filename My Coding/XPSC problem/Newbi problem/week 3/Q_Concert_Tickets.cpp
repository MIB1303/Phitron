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
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        auto it= s.upper_bound(y);
        if(it==s.begin())
        {
            cout <<"-1" <<nl;
        }
        else 
        {
            it--;
            cout<<*it<<nl;
            s.erase(it);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}