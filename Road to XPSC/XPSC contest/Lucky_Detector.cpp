#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int flag = 0;
    while (n != 0)
    {
        int x = n % 10;
        if (x == 7)
        {
            flag = 1;
            break;
        }
        n /= 10;
    }
    if (flag == 1)
        cout << "Lucky";
    else
        cout << "Not Lucky";
    return 0;
}