// Find out the total number of ways to get the tota(DP Coin Change)
#include <bits/stdc++.h>
using namespace std;

int Num_Of_Ways(vector<int> coins, int amount) {
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

    // Base case: there's one way to make amount 0 (use no coins)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }
        }
    }

    cout << "Number of ways to make " << amount << ": " << dp[n][amount] << endl;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= amount; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[n][amount];
}

int main() {
    vector<int> coins = {2, 3, 5, 10};
    int amount = 15;

    Num_Of_Ways(coins, amount);

    return 0;
}