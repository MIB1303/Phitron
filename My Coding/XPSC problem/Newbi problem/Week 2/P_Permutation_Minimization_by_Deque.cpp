// بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
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
        vi a(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        deque<int> dq;
        dq.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] < dq.front())
            {
                dq.push_front(a[i]);
            }
            else
            {
                dq.push_back(a[i]);
            }
        }
 
        for (int b : dq)
        {
            cout << b << " ";
        }
        cout << nl;
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}