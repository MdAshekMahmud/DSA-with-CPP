#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int> &nums, int k) { // Sliding Window O(2*n)
        int n = nums.size();
        int l = 0, r = 0, zeroes = 0, maxlen = INT_MIN;

        while (r < n) {
            if (nums[r] == 0) {
                zeroes++;
            }
            while (zeroes > k) {
                if (nums[l] == 0) {
                    zeroes--;
                }
                l++;
            }
            if (zeroes <= k) {
                maxlen = max(maxlen, r - l + 1);
            }
            r++;
        }
        return maxlen;
    }
};

/*
class Solution {
public:
    int longestOnes(vector<int> &nums, int k) { // Brute Force O(n^2)
        int n = nums.size();
        int l = 0, r = 0, zeroes, maxlen = INT_MIN;

        for (int i = 0; i < n; i++) {
            zeroes = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == 0) {
                    zeroes++;
                } else if (zeroes <= k) {
                    maxlen = max(maxlen, j - i + 1);
                } else {
                    break;
                }
            }
        }

        return maxlen;
    }
};
*/

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution sol;
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    cout << sol.longestOnes(nums, 3);

    return 0;
}
