#include <bits/stdc++.h>
using namespace std;

int printIdx(vector<int> &arr, int target, int idx) {

    if (idx == arr.size()) {
        return -1;
    }

    if (arr[idx] == target) {
        return idx;
    }

    return printIdx(arr, target, idx + 1);
}

int main() {
    int idx = 0, target = 11;
    vector<int> arr = {1, 2, 3, 4, 6, 5, 9};

    cout << printIdx(arr, target, idx);

    return 0;
}