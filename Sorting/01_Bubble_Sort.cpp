#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {3, 4, 1, 5, 2, -1, 99, 0, -100};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}