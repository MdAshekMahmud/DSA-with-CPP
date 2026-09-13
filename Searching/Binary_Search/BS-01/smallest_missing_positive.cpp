/*Given a sorted array of non-negative distinct integers,
find the smallest missing non-negative element in it.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, 1, 2, 4, 5, 8, 9, 12};
    int n = arr.size();

    int low = 0, high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == mid) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << low << '\n';
    return 0;
}