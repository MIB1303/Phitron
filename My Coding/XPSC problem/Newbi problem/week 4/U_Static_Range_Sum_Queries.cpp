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
    int n,q;
    cin>> n>> q;
    vector <long long> v(n+1);
    vector<long long> pre(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>> v[i];
        pre[i]=pre[i-1]+v[i];
    }
  
    while (q--)
    {
        ll l,r;
        cin>> l>> r;
        cout<<pre[r]-pre[l-1]<< nl;
    }
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve_by_MIB1303(t);
    }

    return 0;
}
