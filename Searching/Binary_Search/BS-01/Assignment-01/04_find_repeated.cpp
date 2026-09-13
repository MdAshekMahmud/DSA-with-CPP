/*4. Given an array of integers nums containing n + 1 integers where each integer is in the range
[1, n] inclusive in sorted order. There is only one repeated number in nums, return this repeated
number.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 5};
    int n = arr.size();

    int low = 0, high = n - 1, res = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < mid + 1) {
            res = arr[mid];
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << res << endl;

    return 0;
}