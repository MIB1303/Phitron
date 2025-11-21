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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector <long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        priority_queue<ll> pq;
        ll total = 0;
 
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!pq.empty())
                {
                    total += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout << total << nl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}