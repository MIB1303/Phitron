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
    int n, coustomerno = 1;
    cin >> n;
    set<pii> s;
    multiset<pii> ml;
    vi ans;
    for (int i = 0; i < n; i++)
    {
        int serial;
        cin >> serial;
        if (serial == 1)
        {
            int cost;
            cin >> cost;
            s.insert({coustomerno, cost});
            ml.insert({cost, -coustomerno});
            coustomerno++;
        }
        else if (serial == 2)
        {
            if (s.empty())
                continue;
            auto it = s.begin();
            int pos = it->first, money = it->second;
            ans.push_back(pos);
            ml.erase(ml.find({money, -pos}));
            s.erase(it);
        }
        else
        {
            if (ml.empty())
                continue;
            auto it = prev(ml.end());
            int money = it->first;
            int pos = -it->second;
            ans.push_back(pos);
            s.erase({pos, money});
            ml.erase(it);
        }
    }
    for (auto val : ans)
    {
        cout << val << " ";
    }
    cout << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
