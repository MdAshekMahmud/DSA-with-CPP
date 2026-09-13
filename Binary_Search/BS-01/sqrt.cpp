#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int mySqrt(int x) {
        int low = 0, high = x;

        long long res = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long curr = mid * mid;

            if (curr <= x) {
                res = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    int x = 4;

    cout << sol.mySqrt(x) << endl;

    return 0;
}