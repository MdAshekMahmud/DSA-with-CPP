// Find the doublets in the array whose sum is equal to the given value x. (LeetCode - 1)
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((nums[i] + nums[j]) == target) {
                    return {i, j};
                    break;
                }
            }
        }
        return {0, 0};
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 3};

    vector<int> ans = s.twoSum(nums, 6);

    for (auto el : ans) {
        cout << el << " ";
    }

    return 0;
}