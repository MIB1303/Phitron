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
    int t;
    cin>> t;
    while (t--)
    {
        int n,flag=1;
        cin >> n;
        string s1,s2;
        cin >> s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<n;i++)
        {
            if (s1[i]!=s2[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)cout <<"YES"<< nl;
        else cout << "NO" <<nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}