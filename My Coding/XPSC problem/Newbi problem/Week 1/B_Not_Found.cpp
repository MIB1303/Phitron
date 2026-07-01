#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<char> us;
    for (char ch : s)
    {
        us.insert(ch);
    }
    int flag = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (us.find(c) == us.end())
        {
            cout << c << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0 )
        cout << "None";
    return 0;
}