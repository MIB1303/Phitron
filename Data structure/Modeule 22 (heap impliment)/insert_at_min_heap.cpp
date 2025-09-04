#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int iv;
    cin>>iv;
    v.push_back(iv);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int p_i = (cur_idx - 1) / 2;
        if (v[cur_idx] < v[p_i])
            swap(v[p_i],v[cur_idx]);
        else
            break;
        cur_idx = p_i;
    }
    for (int x : v)
    {
        cout<< x <<endl ;
    }
    return 0;
}
