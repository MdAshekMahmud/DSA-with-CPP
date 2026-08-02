#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3] = {1, 2, 3, 4, 5, 88, 99, 44, 2};

    int max1 = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max1) {
                max2 = max1;
                max1 = arr[i][j];
            }
        }
    }

    cout << "Second largest element is: " << max2 << '\n';

    return 0;
}