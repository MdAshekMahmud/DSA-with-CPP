// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int difference(vector<int> arr) {
    int n = arr.size();

    int evenCnt = 0;
    int oddCnt = 0;

    for (int i = 0; i < n; i++) {
        if ((i % 2 == 0) && arr[i] % 2 != 0) {
            oddCnt += arr[i];
        } else if ((i % 2 != 0) && arr[i] % 2 == 0) {
            evenCnt += arr[i];
        }
    }

    return abs(oddCnt - evenCnt);
}
int main() {
    vector<int> arr = {4, 2, 1, 3};
    cout << difference(arr);
    return 0;
}