#include <bits/stdc++.h>
using namespace std;

int printMax(vector<int> arr, int idx, int maxEle) {
    if (idx == arr.size()) {
        return INT_MIN;
    }

    return max(arr[idx], printMax(arr, idx + 1, maxEle));
}

int main() {
    vector<int> arr = {1, 22, 3, 4, 5, 11, 0};

    cout << printMax(arr, 0, INT_MIN);

    return 0;
}