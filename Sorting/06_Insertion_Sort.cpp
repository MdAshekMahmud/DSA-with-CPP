#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 3, 1, 5, 0, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        while (j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int el : arr) {
        cout << el << ' ';
    }

    return 0;
}