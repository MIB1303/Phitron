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
    int n, k;
    cin >> n >> k;
    map<int, int> fre;
    int cnt = 0;
    ll ans = 0;
    int a[n + 1];
    for (int i = 1, j = 1; j <= n; j++)
    {
        cin >> a[j];
        fre[a[j]]++;

        if (fre[a[j]] == 1)
            cnt++;
            
        while (cnt > k)
        {
            fre[a[i]]--;
            if (fre[a[i]] == 0)
                cnt--;
            i++;
        }
        ans += (j - i + 1);
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
