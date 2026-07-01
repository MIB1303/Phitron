#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int ar[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long int move = 0;
    for (long long int i = 1; i < n; i++)
    {
        if (ar[i] < ar[i - 1])
        {
            move += ar[i - 1] - ar[i];
            ar[i] = ar[i - 1];
        }
    }
    cout << move << endl;
    return 0;
}