// 1. Write a program to apply binary search in array sorted in decreasing order.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int target = 1;

    int low = 0, high = arr.size() - 1, idx = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            idx = mid;
            break;
        } else if (arr[mid] > target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (idx != -1) {
        cout << "Target Element " << arr[idx] << " Found at index: " << idx << '\n';
    } else {
        cout << "Not Found\n";
    }

    return 0;
}