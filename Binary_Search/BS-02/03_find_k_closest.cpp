#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x) {
        int n = arr.size();
        int low = 0, high = n - k;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (x - arr[mid] > arr[mid + k] - x) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return vector<int>(arr.begin() + low, arr.begin() + low + k);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 1, 2, 3, 4, 5};
    int k = 4;
    int x = -1; // target

    for (auto el : sol.findClosestElements(arr, k, x)) {
        cout << el << " ";
    }

    return 0;
}