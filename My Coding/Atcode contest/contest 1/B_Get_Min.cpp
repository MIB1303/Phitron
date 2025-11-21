#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    multiset<int> box;
    while (t--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            box.insert(x);
        }
        else if (type == 2)
        {
            auto it = box.begin();
            cout << *it << endl;
            box.erase(it);
        }
    }

    return 0;
}