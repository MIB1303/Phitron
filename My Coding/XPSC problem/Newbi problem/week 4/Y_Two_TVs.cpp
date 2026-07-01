// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    long long sum = 0;
    bool ok = true;
    for (auto [time, show] : mp)
    {
        sum += show;
        if (sum > 2)
            ok = false;
    }
    if (ok)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
