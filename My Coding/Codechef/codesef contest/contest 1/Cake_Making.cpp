#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>> a >> b ;
    if (a==1 && b==1)
    {
        cout<< 0 << endl ;
    }
    else if (a== b)
    {
        cout<< (a*b )-a << endl ;
    }
    else 
    {
        cout<< (a*b)-min(a,b)<<endl ;
    }
    return 0;
}