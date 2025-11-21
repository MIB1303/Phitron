#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] =='s' && s[i + 1] == 's')
            flag = 1;
    }
    if (flag == 1)
        cout << "hiss" << "\n";
    else
        cout << "no hiss" << "\n";
    return 0;
}