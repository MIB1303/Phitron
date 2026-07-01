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
        string s;
        cin >> s;
        set<char> b(s.begin(), s.end());
        vector<char> a(b.begin(), b.end());
        int l = a.size();
        for (auto c : s)
        {
            int i = 0;
            while (a[i] != c)
            {
                i++;
            }
            cout << a[l - 1 - i];
        }
        cout << endl;
    }

    return 0;
}