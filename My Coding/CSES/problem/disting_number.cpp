#include <bits/stdc++.h>
using namespace std;
bool vis[100000005];
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
    return 0;
}