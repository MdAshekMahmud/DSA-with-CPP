#include <bits/stdc++.h>
using namespace std;

void Print(vector<int> arr, int idx) {
    if (idx == arr.size())
        return;

    cout << arr[idx] << " ";
    Print(arr, idx + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Print(arr, 0);

    return 0;
}