#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];
int dp[1005][1005];
int knapsack(int i, int m_wt)
{
    if (i < 0 || m_wt <= 0)
    {
        return 0;
    }
    if (dp[i][m_wt] != -1)
    {
        return dp[i][m_wt];
    }
    if (weight[i] <= m_wt)
    {
        int op1 = knapsack(i - 1, m_wt - weight[i]) + val[i];
        int op2 = knapsack(i - 1, m_wt);
        dp[i][m_wt] = max(op1, op2);
        return dp[i][m_wt];
    }
    else
    {
        dp[i][m_wt] = knapsack(i - 1, m_wt);
        return dp[i][m_wt];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx_weight;

        cin >> n >> mx_weight;
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i] ;
        }
         for (int i = 0; i < n; i++)
        {
            cin >> val[i];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= mx_weight; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n - 1, mx_weight) << "\n";
    }

    return 0;
}