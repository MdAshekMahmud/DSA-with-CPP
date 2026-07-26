#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int> &nums) { // Sliding Window
        sort(nums.begin(), nums.end());
        int j = 0, maxLength = 0;

        for (int i = 0; i < nums.size(); ++i) {
            while (nums[i] - nums[j] > 1) {
                ++j;
            }
            if (nums[i] - nums[j] == 1) {
                maxLength = max(maxLength, i - j + 1);
            }
        }
        return maxLength;
    }
};

class Solution {
public:
    int findLHS(vector<int> &nums) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }

        int maxlen = 0;
        for (auto &el : hash) {
            int current = el.first;
            if (hash.count(current + 1)) {
                maxlen = max(maxlen, hash[current] + hash[current + 1]);
            }
        }
        return maxlen;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    Solution sol;
    cout << sol.findLHS(nums);

    return 0;
}