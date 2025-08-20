#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, vector<long long>> mp;
    string name;
    long long val;
    while (n--)
    {
        cin >> name >> val;
        mp[name].push_back(val);
    }
    for (const auto &it : mp)
    {
        string name = it.first;
        vector<long long> v = it.second;
        sort(v.begin(), v.end(), greater<long long>());
        for (long long val : v)
        {
            cout << name << " " << val << "\n";
        }
    }
    return 0;
}