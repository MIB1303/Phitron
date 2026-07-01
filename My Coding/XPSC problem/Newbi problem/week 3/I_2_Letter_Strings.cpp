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
 
        ll cnt[11][11] = {};
        ll a = 0;
 
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int x = s[0] - 'a';
            int y = s[1] - 'a';
            for (int j = 0; j < 11; j++)
            {
                if (j == x)
                {
                    continue;
                }
 
                a += cnt[j][y];
            }
            for (int j = 0; j < 11; j++)
            {
                if (j == y)
                {
                    continue;
                }
 
                a += cnt[x][j];
            }
            cnt[x][y]++;
        }
        cout << a << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}