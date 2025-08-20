#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    long long int ar[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        cin >> ar[i];
    }

    long long int pr_sum[n + 1];

    pr_sum[1] = ar[1];

    for (int i = 2; i <= n; i++)
    {

        pr_sum[i] = pr_sum[i - 1] + ar[i];
    }

    while (q--)
    {
        int l, r; 
        long long sum = 0;
        cin >> l >> r;
        if (l == 1)
        {
            sum = pr_sum[r];
        }

        else
        {
            sum = pr_sum[r] - pr_sum[l - 1];
        }

        cout << sum << endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n,q;
//     cin>>n>>q;
//     int ar[n+1];
//     for(int i=1;i<n+1;i++)
//     {
//         cin>>ar[i];
//     }

//     while(q--)
//     {
//         int l,r,sum=0;
//         cin>>l>>r;
//         for(int i=l;i<=r;i++)
//         {
//             sum+=ar[i];
//         }

//         cout<<sum<<endl;
//     }

// }
