#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    bool x = false;
    int st = 0, dt = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (!x)
        {
            if (ar[i] >= ar[j])
                st += ar[i++];
            else
                st += ar[j--];
        }
        else
        {
            if (ar[i] >= ar[j])
                dt += ar[i++];
            else
                dt += ar[j--];
        }
        x = !x;
    }
    cout << st << " " << dt << endl;
    return 0;
}
