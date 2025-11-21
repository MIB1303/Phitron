#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while (t--)
    {
        int n,a,b;
        cin >> n >> a >> b ;
        int dis = INT_MAX ;
        for (int i=0;i< n ;i++)
        {
            int x,y;
            cin >> x >> y ;
            int c = abs(x-a)+abs(y-b);
            if (c<dis)dis=c;
        }
        cout << dis << endl ;
    }

    return 0;
}