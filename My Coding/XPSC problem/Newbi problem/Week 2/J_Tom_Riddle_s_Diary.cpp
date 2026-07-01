#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s ;
        cin>> s ;
        if (mp[s]==0)
        {
            cout << "NO" << endl;
            mp[s] = 1 ;
        }
        else 
        {
            cout << "YES" << endl ;
        }
    }

    return 0;
}