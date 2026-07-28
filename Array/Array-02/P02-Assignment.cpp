// Largest three distinct elements
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> getThreeLargest(vector<int> &arr) {
        int n = arr.size();

        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int max3 = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max1 && arr[i] != max1) {
                max3 = max2;
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2 && arr[i] != max1 && arr[i] != max3) {
                max3 = max2;
                max2 = arr[i];
            } else if (arr[i] > max3 && arr[i] != max2 && arr[i] != max1) {
                max3 = arr[i];
            }
        }
        vector<int> ans;
        if (max1 != INT_MIN)
            ans.push_back(max1);
        if (max2 != INT_MIN)
            ans.push_back(max2);
        if (max3 != INT_MIN)
            ans.push_back(max3);

        return ans;
    }
};

int main() {
    Solution s;

    vector<int> nums = {6, 8, 9, 2, 1, 10};
    vector<int> ans = s.getThreeLargest(nums);

    for (auto el : ans) {
        cout << el << " ";
    }

    return 0;
}