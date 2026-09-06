/*Q: Given an array with N distinct elements, convert the given array to a
form where all elements are in the range from 0 to N - 1. The order of
elements is the same, i.e., 0 is placed in the place of the smallest element
, 1 is placed for the second smallest element.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {19, 12, 23, 8, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(n, 0);

    int x = 0;
    for (int i = 0; i < n; i++) {
        int mini = INT_MAX;
        int min_idx = -1;

        for (int j = 0; j < n; j++) {
            if (v[j] != 1) {
                if (mini > arr[j]) {
                    mini = arr[j];
                    min_idx = j;
                }
            }
        }
        arr[min_idx] = x;
        v[min_idx] = 1;
        x++;
    }

    for (auto el : arr) {
        cout << el << " ";
    }

    return 0;
}