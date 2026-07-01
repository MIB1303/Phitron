// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
void solve_by_MIB1303()
{
    int n,m;
    cin >> n >> m;
    vector<int> ar(n+1),cnt(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> ar[i] ;
    }
    set<int> s;
    for (int i=n;i>=1;i--)
    {
        s.insert(ar[i]);
        cnt[i]=s.size();
    }
    while (m--)
    {
        int pos ;
        cin >> pos ;
        cout << cnt[pos] << nl ;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}