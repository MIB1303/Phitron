#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    string mx;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        string s1 = "";
        s1 += s[i];
        s1 += s[i + 1];
        mp[s1]++;

        if (mp[s1] > cnt)
        {
            cnt = mp[s1];
            mx = s1;
        }
    }
    cout << mx << endl;

    return 0;
}