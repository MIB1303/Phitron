// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N, M;
//         cin >> N >> M;
//         vector<int> freq(M, 0);
//         for (int i = 0; i < N; ++i)
//         {
//             int x;
//             cin >> x;
//             freq[x]++;
//         }
//         long long minSum = LLONG_MAX;
//         for (int shift = 0; shift < M; ++shift)
//         {
//             long long sum = 0;
//             for (int i = 0; i < M; ++i)
//             {
//                 int newVal = (i + shift) % M;
//                 sum += 1LL * freq[i] * newVal;
//             }
//             minSum = min(minSum, sum);
//         }
//         cout << minSum << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> freq(M, 0);
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        long long currSum = 0;
        for (int i = 0; i < M; ++i)
        {
            currSum += 1LL * freq[i] * i;
        }

        long long minSum = currSum;
        long long totalElements = N;

        for (int shift = 1; shift < M; ++shift)
        {
            long long zeroCount = freq[(M - shift) % M];
            currSum += totalElements;
            currSum -= zeroCount * M;
            minSum = min(minSum, currSum);
        }

        cout << minSum << '\n';
    }

    return 0;
}
