#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int trap2(vector<int> &height) {
        int n = height.size();

        int prev[n];
        prev[0] = -1;
        int max1 = height[0];
        for (int i = 1; i < n; i++) {
            prev[i] = max1;
            if (max1 < height[i]) {
                max1 = height[i];
            }
        }

        int next[n];
        next[n - 1] = -1;
        max1 = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            next[i] = max1;
            if (max1 < height[i]) {
                max1 = height[i];
            }
        }
        for (int i = 0; i < n; i++) {
            prev[i] = min(prev[i], next[i]);
        }
        int waterTrapped = 0;
        for (int i = 1; i < n - 1; i++) {
            if (height[i] < prev[i]) {
                waterTrapped += prev[i] - height[i];
            }
        }

        return waterTrapped;
    }
};

// class Solution {
//   public:
//     int trap(vector<int> &height) {
//         int n = height.size();
//         int waterTraped = 0;

//         vector<int> leftMax(n), rightMax(n);
//         int max1 = INT_MIN, max2 = INT_MIN;
//         for (int i = 0; i < n; i++) {
//             if (height[i] > max1) {
//                 max1 = height[i];
//             }
//             leftMax[i] = max(max1, height[i]);
//         }
//         for (int i = n - 1; i >= 0; i--) {
//             if (height[i] > max2) {
//                 max2 = height[i];
//             }
//             rightMax[i] = max(height[i], max2);
//         }
//         for (int i = 0; i < n; i++) {
//             waterTraped += min(leftMax[i], rightMax[i]) - height[i];
//         }

//         return waterTraped;
//     }
// };

int main() {
    Solution s;
    vector<int> height = {4, 2, 0, 3, 2, 5};

    cout << s.trap2(height);

    return 0;
}