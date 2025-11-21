#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    if (s[0] == s[2] &&s[1] == 'w')
        flag = 1;
    if (flag == 1)
        cout << "Cute";
    else
        cout << "No";
    return 0;
}