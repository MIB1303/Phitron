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
        vector<int> v(n);
        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cnt[v[i]]++;
        }

        int ans = 0;

        ans += min(cnt[1], cnt[3]);

        if (cnt[2] > 1)
        {
            ans += cnt[2] - 1;
        }

        cout << ans << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
