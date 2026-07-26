#include <bits/stdc++.h>
using namespace std;

long long KnapsackTabu(vector<int> &val, vector<int> &wt, int W) {
    int n = val.size();
    vector<vector<long long>> dp(n + 1, vector<long long>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            int itemWT = wt[i - 1];
            int itemVal = val[i - 1];

            if (itemWT <= j) {
                dp[i][j] = max(itemVal + dp[i - 1][j - itemWT], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            cout << setw(3) << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][W];
}

int main() {
    vector<int> wt = {3, 4, 5, 6};
    vector<int> val = {2, 3, 4, 1};
    int knapsackCapacity = 8;

    cout << KnapsackTabu(val, wt, knapsackCapacity) << endl;
    return 0;
}