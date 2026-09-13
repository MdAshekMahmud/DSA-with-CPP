/* Given a sorted array of n elements and a target 'x'. Find the first occurrence
of 'x' in the array. If 'x' doesn't exist, return -1. */
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(const vector<int> &arr, int x) {
    int low = 0, high = arr.size() - 1, ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1; // move left to find the first occurrence
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    cout << "First occurrence of " << x << " is at index: " << firstOccurrence(arr, x) << endl;

    return 0;
}