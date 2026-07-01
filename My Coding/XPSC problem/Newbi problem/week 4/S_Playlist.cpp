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
    map<int, int> lst_idx;
    int ans=0;

    for (int i=1,j=1;j<=n;j++)
    {
        int x;
        cin>> x;
        i = max(i,lst_idx[x]+1);
        lst_idx[x]=j;
        ans = max(ans,j-i+1);
    }
    cout<< ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
