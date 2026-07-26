// DP Knapsack
#include <bits/stdc++.h>
using namespace std;

int DP_Knapsack(vector<int> wt, vector<int> val, int knapsackCapacity) // O(n*W)
{
    int n = wt.size();
    int m = knapsackCapacity;
    vector<vector<int>> dp(n + 1, vector<int>(knapsackCapacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (wt[i - 1] <= j) {
                dp[i][j] = max((val[i - 1] + dp[i - 1][j - wt[i - 1]]), dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= knapsackCapacity; j++) {
            cout << setw(3) << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Profit : " << dp[n][m];

    return dp[n][m];
}

int main() {
    vector<int> wt = {2, 5, 1, 3, 4};
    vector<int> val = {15, 14, 10, 45, 30};
    int knapsackknapsackCapacity = 7;

    DP_Knapsack(wt, val, knapsackknapsackCapacity);
    return 0;
}