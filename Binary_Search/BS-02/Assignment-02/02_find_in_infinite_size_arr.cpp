// 2. You have a sorted array of infinite numbers, how would you search an element in the array
#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(log p)
// Auxiliary Space: O(1)

int binary_search(vector<int> &arr, int target, int low, int high) {

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}; // let infinite size arr
    int target = 12;

    int low = 0, high = 1;
    while (high < arr.size() && target > arr[high]) {

        int temp = high + 1;

        // Double the box size and update the end index
        high = high + (high - low + 1) * 2;

        if (high >= arr.size()) {
            high = arr.size() - 1;
        }

        low = temp;
    }

    int ans = binary_search(arr, target, low, high);
    cout << "Element " << ans << " Found in the array.." << '\n';

    return 0;
}