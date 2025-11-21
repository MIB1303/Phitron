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
    while (n--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        bool flag = false;
        if (a == 'W' && b == 'W' && c == 'W')
            flag = true;
        else if (b == 'W' && c == 'W' && d == 'W')
            flag = true;
        else if (c == 'W' && d == 'W' && e == 'W')
            flag = true;
        else if (d == 'W' && e == 'W' && f == 'W')
            flag = true;

        if (flag)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}