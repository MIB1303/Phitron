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
        string a, b;
        cin >> a >> b;
 
        int cnt_a = 0;
        int cnt_b = 0;
        bool flag = true;
 
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                if (a[i] == '0')
                {
                    cnt_b++;
                }
                if (b[i] == '0')
                {
                    cnt_a++;
                }
            }
            else
            {
                if (a[i] == '0')
                {
                    cnt_a++;
                }
                if (b[i] == '0')
                {
                    cnt_b++;
                }
            }
        }
 
        int c = (n + 1) / 2;
        int d = n / 2;
 
        if (cnt_a >= c && cnt_b >= d)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl ;
        }
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}