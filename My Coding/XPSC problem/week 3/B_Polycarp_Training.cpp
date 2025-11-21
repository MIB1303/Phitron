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
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    int count = 0;
    int pro = 1;
    while (!ml.empty())
    {
        auto lb = ml.lower_bound(pro);
        if (lb != ml.end())
        {
            count++;
            ml.erase(lb);
        }
        else
        {
            break;
        }
        pro++;
    }
    cout << count << nl ;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}