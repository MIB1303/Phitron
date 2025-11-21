#include <bits/stdc++.h>
using namespace std;
int soto_length(string &s)
{
    stack<char> vo;
    for (char ch : s)
    {
        if (!vo.empty() && vo.top() == ch)
        {
            vo.pop();
        }
        else
            vo.push(ch);
    }
    return vo.size();
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        int l2 = soto_length(s);
        cout << l2 << endl;
    }
    return 0;
}
