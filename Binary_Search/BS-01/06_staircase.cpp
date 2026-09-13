/*You have n coins and you want to build a staircase with these coins. The staircase consists of k
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int arrangeCoins(int n) {
        int low = 1, high = n;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            long coins_needed = mid * (mid + 1) / 2;

            if (coins_needed == n) {
                return mid;
            } else if (coins_needed < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high;
    }
};

int main() {
    Solution sol;
    cout << sol.arrangeCoins(8) << '\n';

    return 0;
}