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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        int cnt = 0;
        bool flag = false;
 
        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
            if (a[i] < 0 && !flag)
            {
                flag = true;
                cnt++;
            }
            if (a[i] > 0)
            {
                flag = false;
            }
        }
        cout << sum << " " << cnt << nl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}
