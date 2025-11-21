#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    vector<char>  v ;
    for (char c : s )
    {
        if (c >= 'A' && c <= 'Z')
        v.push_back(c);
    }
    for (char c : v)
    {
        cout << c ;
    }
    return 0;
}