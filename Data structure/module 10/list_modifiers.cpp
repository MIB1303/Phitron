#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40,20 ,20,20, 50, 60, 70, 80, 90, 100};
    // list<int> l2;
    // //l2 = l;
    // l.push_front(500);
    // l.push_back(100);

    // l2.assign(l.begin(),l.end());
    // cout << "For l" << ": "<< endl;
    // for (int val : l)
    // {
    //     cout << val << endl;
    // }
    // l.pop_back();
    // l.pop_front();
    // cout << "For l2" << ": "<< endl;

    // next(l.begin(),1);
    // cout<< *next (l.begin(),2);

    // l.insert(next(l.begin(), 3), 100);
    // l.erase(next(l.begin(), 3));
    // l.erase(next(l.begin(),2), next(l.begin(),5));
    replace(l.begin(),l.end(),20,1);
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}