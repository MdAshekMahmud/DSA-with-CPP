#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        int candidate = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int current_candidate = nums[i];

            if (count == 0) {
                candidate = current_candidate;
            }
            if (current_candidate == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 4, 3};
    cout << sol.majorityElement(nums) << '\n';

    return 0;
}