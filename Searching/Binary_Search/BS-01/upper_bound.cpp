// Given a sorted integer array and an integer 'x', find the upper bound of 'x'.
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int upperBound(vector<int> &arr, int target) {
        int n = arr.size();

        int left = 0, right = n;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        return left;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int x = 15;

    cout << arr[sol.upperBound(arr, x)] << endl;

    return 0;
}