#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    set<string> u;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        u.insert(s);
    }
    cout << u.size() << endl;

    return 0;
}