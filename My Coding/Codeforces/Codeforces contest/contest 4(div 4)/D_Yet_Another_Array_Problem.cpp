// "Verily, with hardship comes ease." – [Qur'an 94:6]
// Author: Biplob
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define nl endl
void gcd(int a, int b)
{
    int x=b;
    while (b != 0)
    {
        
        int temp = b;
        b = a % b;
        a = temp;
    }
    if (a==1)
    {
        cout<< x << nl;
    }
    else 
    {
        
        gcd(a,x+1);
    }
}

void solve_by_MIB1303()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        gcd(v[0],2);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve_by_MIB1303();

    return 0;
}






