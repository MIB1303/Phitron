#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = min(a,b/2);
        cout<< 3*x << endl ;
    }
    return 0;
}