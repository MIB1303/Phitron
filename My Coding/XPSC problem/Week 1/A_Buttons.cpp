#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>> a>>b ;
    int x = max((2*a-1),(2*b-1));
    cout << max(x,a+b);
    return 0;
}