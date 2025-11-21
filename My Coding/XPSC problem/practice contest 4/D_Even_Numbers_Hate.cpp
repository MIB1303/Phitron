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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vi pre_sum(n + 2);
        pre_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pre_sum[i] = pre_sum[i - 1] + v[i];
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (pre_sum[i] % 2 !=0)
                cnt++;
        }
        if (cnt==0)
        {
            cout<< 0 <<nl;
        }
        else 
        cout<< cnt+1<<nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
