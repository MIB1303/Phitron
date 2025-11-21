#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin  >>  n ;
    cin.ignore();
    string ar[n+1];
    for (int i = 1 ; i<= n ;i++)
    {
        getline(cin,ar[i]);
    }
    for (int i = 1 ; i<= n ;i++)
    {
        if (i%2!=0)
        cout << ar[i] << endl ;
    }
    return 0;
}