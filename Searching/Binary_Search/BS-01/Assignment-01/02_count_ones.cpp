/*2. Given a sorted binary array, efficiently count the total number of 1’s in it.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 0, 0, 0, 1, 1, 1, 1, 1};
    int n = arr.size();

    int low = 0, high = n - 1, res = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < 1) {
            res = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << n - res - 1 << endl;

    return 0;
}