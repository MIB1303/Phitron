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

        bool flag = false;
        int f = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && !flag)
            {
                f = i;
                cnt++;
                flag = true;
            }
        }
        if (cnt == 0)
            cout << 0 << nl;

        else
        {
            int cnt = 0;
            for (int i = f; i < n; i++)
            {
                if (s[i] == '1')
                    cnt++;
            }
            cout << cnt << nl;
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
