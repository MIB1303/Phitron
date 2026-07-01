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
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    ll sl = 0, sr = 0, res = 0;
    while (l <= r)
    {
        if (sl < sr)
        {
            sl += a[l++];
        }
        else if (sl > sr)
        {
            sr += a[r--];
        }
        if (sl == sr)
        {
            res = sl;
            sl += a[l++];
        }
    }
    cout << res << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
