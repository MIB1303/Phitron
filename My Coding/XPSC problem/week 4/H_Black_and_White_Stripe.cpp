// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define nl endl

void solve_by_MIB1303(int t)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < k; i++)
        if (s[i] == 'W')
            cnt++;

    int ans = cnt;

    for (int i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
            cnt--;
        if (s[i] == 'W')
            cnt++;
        ans = min(ans, cnt);
    }

    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve_by_MIB1303(t);
    return 0;
}
