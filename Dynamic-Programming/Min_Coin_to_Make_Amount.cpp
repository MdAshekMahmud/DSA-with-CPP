// Find out minimum number of coins to be used to make amount
#include <bits/stdc++.h>
using namespace std;

int minimum_Coins(vector<int> &coins, int amount)
{
    int n = coins.size();
    const int INF = 1e9;
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, INF)); // Initialize with maxeimum value

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0; // zero amount requires zero coins

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (coins[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][amount] == INF ? -1 : dp[n][amount];
}

int main()
{
    vector<int> coins = {1, 5, 6, 9};
    int amount = 10;

    minimum_Coins(coins, amount);
    return 0;
}