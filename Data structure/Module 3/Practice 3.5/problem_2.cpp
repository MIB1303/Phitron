#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int psum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
   
    for (int i = 0; i < n; i++)
    {
        if (sum - psum - v[i] == psum)
        {
            cout << i << endl;
            return 0;
        }
        psum += v[i];
    }

    return 0;
}
