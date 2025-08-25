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
const long long INF = 1e9;

vector <ll,bool> pr3(INF,false);
vector <ll> v;
map <ll,ll> mp;
void pwrnki()
{
    for(int i=0; i*i<=INF; i++)
    {
        ll val = (double)pow(3,i);
        pr3[val] = true;
        mp[val] = i;
        v.push_back(val);
    }
    // sort(all(v));
}

ll coins(ll x)
{
    ll calc = (double)pow(3,x+1) + (x*(double)(pow(3,x-1)));
    return calc;
}


void sayedErSolve(int tc)
{
    // Your solution logic here
    ll n;
    cin >> n;
    if(pr3[n])
    {
        cout << coins(mp[n]) << nl;
        return;
    }

    auto it = upper_bound(all(v), n);
    it--;
    ll cnt = coins(mp[*it]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pwrnki();
    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        sayedErSolve(tc);
    }

    return 0;
}
