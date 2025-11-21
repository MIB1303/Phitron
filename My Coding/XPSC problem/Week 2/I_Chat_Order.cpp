#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    vector<string> a(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
 
    set<string> seen;
    vector<string> f;
 
    for (int i = t - 1; i >= 0; i--)
    {
 
        if (!seen.count(a[i]))
        {
            seen.insert(a[i]);
            f.push_back(a[i]);
        }
    }
  
    for (string name : f)
    {
        cout << name << endl;
    }
    
    return 0;
}