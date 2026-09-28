#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int peakIndexInMountainArray(vector<int> &arr) {
        int n = arr.size();

        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 10, 5, 2};

    cout << sol.peakIndexInMountainArray(arr) << '\n';

    return 0;
}