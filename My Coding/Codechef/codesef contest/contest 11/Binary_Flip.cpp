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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 0, cnt0  = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
                cnt1++;
            else if (s[i] == '0' && s[i + 1] == '0')
                cnt0++;
        }
        int fil = cnt0 - cnt1;

        if (fil <= 0)
        {
            cout << 0 << nl;
        }
        else
            cout << (fil + 1) / 2 << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
