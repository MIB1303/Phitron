#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    int ar[5] = {1, 2, 3, 1, 5};
    vector<int> v(5, 10);
    list<int> l2(v.begin(), v.end());

    // for (auto it = l.begin();it!= l.end();it++)
    // {
    //     cout<< *it << " ";
    // }
    l2.clear();
    if (l2.empty())
    {
        cout << "Empty"<<" ";
    }
    cout << l2.size() << endl;
    for (int val : l2)
    {
        cout << val << " ";
    }
    return 0;
}