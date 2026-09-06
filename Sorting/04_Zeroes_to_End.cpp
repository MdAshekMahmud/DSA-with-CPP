// Push zeroes to end while maintaining the relative order of other elements
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 0, 1, 2, 0, 4, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[x++] = arr[i];
        }
    }
    for (int i = x; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}