#include <bits/stdc++.h>
using namespace std;

void printReverse(vector<int> &arr, int idx) {
    if (idx == arr.size()) {
        return;
    }

    printReverse(arr, idx + 1);
    printf("%d ", arr[idx]);
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6, 11};

    printReverse(arr, 0);

    return 0;
}