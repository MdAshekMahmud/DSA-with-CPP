#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = nums1.size() - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 6, 9};

    s.merge(nums1, 3, nums2, 3);

    for (int el : nums1) {
        cout << el << " ";
    }

    return 0;
}