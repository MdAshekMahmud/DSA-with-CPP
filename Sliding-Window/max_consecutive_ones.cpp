#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int max_1s = 0;
        int curr_1s = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr_1s++;
            } else {
                max_1s = max(curr_1s, max_1s);
                curr_1s = 0;
            }
        }
        return max(curr_1s, max_1s);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1, 1, 0, 1};

    auto result = sol.findMaxConsecutiveOnes(nums);

    // Print result
    cout << result << endl;

    return 0;
}