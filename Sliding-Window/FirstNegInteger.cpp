#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void firstNegInt(vector<int> &nums, int k) {
        int left = 0;

        vector<int> ans;
        for (int right = 0; right < nums.size(); right++) {
            // Maintain window size
            if (right - left + 1 > k) {
                left++;
            }

            // If window is complete, find and print first negative
            if (right - left + 1 == k) {
                bool found = false;
                for (int i = left; i <= right; i++) {
                    if (nums[i] < 0) {
                        cout << nums[i] << " ";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "0 ";
                }
            }
        }
        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {-8, 2, 3, -6, 10};
    Solution s;
    s.firstNegInt(nums, 2);

    return 0;
}