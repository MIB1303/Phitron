#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>> n >> x ;
    vector<int> v(n) ;
    for (int i=0;i<n;i++)
    {
        cin >> v[i] ;
    }
    unordered_set<int> s(v.begin(),v.end());
    int mex = 0;
    for (int i = 0; i < x; i++)
    {
        if (!s.count(i))
        {
            mex++;
        }
    }
    if (s.count(x))
    {
        mex++;
    }
        cout << mex << "\n";
    return 0;
}































// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;               // Input size of array
//     vector<int> a(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];        // Input array

//     unordered_set<int> s(a.begin(), a.end()); // Store all elements in a set

//     int mex = 0;
//     while (s.count(mex)) {
//         mex++;              // Keep increasing until a number is not found
//     }

//     cout << "MEX = " << mex << endl;

//     return 0;
// }
