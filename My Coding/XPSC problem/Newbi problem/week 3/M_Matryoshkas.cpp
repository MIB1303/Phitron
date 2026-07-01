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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        map<int, int> mp;
        set<int> s;
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
            s.insert(a[i] + 1);
        }
        int prev = 0;
        int r = 0;
        int ls = -1;
        for (auto size : s)
        {
            int curr = mp[size];
 
            if (ls != -1 && size != ls + 1)
            {
                prev = 0;
            }
            if (curr > prev)
            {
                r += curr - prev;
            }
            prev = curr;
            ls = size;
        }
        cout << r << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}