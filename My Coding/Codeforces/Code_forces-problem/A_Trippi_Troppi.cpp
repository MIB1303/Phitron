#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        vector<char> v;
        v.push_back(s[0]);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
                v.push_back(s[i + 1]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}