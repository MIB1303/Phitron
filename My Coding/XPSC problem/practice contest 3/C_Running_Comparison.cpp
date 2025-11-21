// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl

void solve_by_MIB1303(int t)
{
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int happydays = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] <= 2 * a[i] && a[i] <= 2 * b[i])
            happydays++;
    }

    cout << happydays << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
