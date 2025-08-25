// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
// "Verily, with hardship comes ease." – [Qur'an 94:6]

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define sz(x) (x).size()
#define arrsz(x) (sizeof(x) / sizeof(x[0]))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define HA cout << "YES" << nl
#define NA cout << "NO" << nl

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;
const long long INF = 1e18;

void sayedErSolve(int tc)
{
    // Your solution logic here
    int n,m;
    cin >> n;
    string a,b,c;
    cin >> a >> m >> b >> c;
    for(int i=0; i<m; i++)
    {
        if(c[i] == 'V')
        {
            a = b[i] + a;
        }
        else a = a + b[i];
    }

    cout << a << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        sayedErSolve(tc);
    }

    return 0;
}
