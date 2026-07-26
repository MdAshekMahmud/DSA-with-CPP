#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int n = nums.size();
        int l = 0, r = 0, sum = 0, minLen = INT_MAX;

        while (r < n) {
            sum += nums[r];

            while (sum >= target) {
                minLen = min(minLen, r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    Solution s;
    vector<int> nums = {1, 1, 1, 3};
    cout << s.minSubArrayLen(4, nums);

    return 0;
}