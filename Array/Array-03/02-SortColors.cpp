#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int n = nums.size();

        int a = 0, b = 0, c = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                a++;
            else if (nums[i] == 1)
                b++;
            else if (nums[i] == 2)
                c++;
        }

        for (int i = 0; i < n; i++) {
            if (i < a) {
                nums[i] = 0;
            } else if (i < a + b) {
                nums[i] = 1;
            } else {
                nums[i] = 2;
            }
        }
    }
};

// Dutch Flag Algorithm
// class Solution {
//   public:
//     void sortColors(vector<int> &nums) {
//         int n = nums.size();

//         int low = 0, mid = 0, high = n - 1;

//         while (mid <= high) {
//             if (nums[mid] == 2) {
//                 swap(nums[mid], nums[high]);
//                 high--;
//             } else if (nums[mid] == 0) {
//                 swap(nums[mid], nums[low]);
//                 low++;
//                 mid++;
//             } else if (nums[mid] == 1) {
//                 mid++;
//             }
//         }
//     }
// };

int main() {
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    s.sortColors(nums);

    for (int el : nums) {
        cout << el << " ";
    }

    return 0;
}