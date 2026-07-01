// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vii vector<long long>
#define vs vector<string>
#define pii pair<int, int>
#define ha cout << "YES" << endl;
#define na cout << "NO" << endl;
#define nl endl
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve_by_MIB1303()
{
    int t;
    cin>> t;
    while (t--)
    {
        int n;cin>> n;
        string s;
        cin>> s;
        int cnt=0,cnt1=0,way=0;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='1')cnt1++;
            else cnt++;
            if (cnt1>cnt)way++;
        }
        cout<< way<< nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
