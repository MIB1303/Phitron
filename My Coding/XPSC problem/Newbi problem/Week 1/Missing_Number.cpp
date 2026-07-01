
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int sum = 0;
    vector<long long int> v(n-1);
    for (long long int i=0;i<v.size();i++)

    {
        cin>>v[i];
        sum+=v[i];
    }

    cout<< (n*(n+1)/2) - sum << endl;

    return 0;
}