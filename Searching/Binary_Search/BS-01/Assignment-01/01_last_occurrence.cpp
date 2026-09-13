/*1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the
array. If ‘x’ does not exist return -1.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int n = arr.size();
    int x = 4;

    int low = 0, high = n - 1, res = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << res << endl;

    return 0;
}