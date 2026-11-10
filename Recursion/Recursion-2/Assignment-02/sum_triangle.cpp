#include <bits/stdc++.h>
using namespace std;

void triangle_sum(vector<int> &arr, int n) {

    if (n == 0) {
        return;
    }

    vector<int> temp(n - 1);
    for (int i = 0; i < n; i++) {

        cout << arr[i] << " ";

        if (i != 0) {
            temp[i - 1] = arr[i] + arr[i - 1];
        }
    }
    cout << '\n';

    triangle_sum(temp, n - 1);
}

int main() {
    vector<int> arr{5, 4, 3, 2, 1};

    triangle_sum(arr, arr.size());

    return 0;
}