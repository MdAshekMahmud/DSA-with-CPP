// Given an array, find if it is sorted or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool flag = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}