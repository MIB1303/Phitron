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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vi a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        string s1;
        cin >> s1;
 
        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
 
        sort(s1.begin(), s1.end());
 
        for (int i = 0; i < a.size(); i++)
        {
            s[a[i] - 1] = s1[i];
        }
        cout << s << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}