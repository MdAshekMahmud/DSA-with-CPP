#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int triangularSum(vector<int> &nums) {

        int n = nums.size();

        if (n == 1)
            return nums[0];

        for (int i = 0; i < n - 1; i++) {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        }

        nums.pop_back();

        return triangularSum(nums);
    }
};

int main() {
    Solution sol;
    vector<int> nums{5, 4, 3, 2, 1};

    cout << sol.triangularSum(nums);

    return 0;
}