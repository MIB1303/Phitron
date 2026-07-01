#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        unordered_set<int> found;
        int i = n - 1;
        while (i >= 0 && found.find(a[i]) == found.end())
        {
            found.insert(a[i]);
            i--;
        }
        cout << i + 1 << endl;
    }

    return 0;
}