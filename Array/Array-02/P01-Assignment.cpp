// Count the number of elements strictly greater than x.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int countElements(vector<int> arr, int n) {

    int maximum = *max_element(arr.begin(), arr.end());
    int minimum = *min_element(arr.begin(), arr.end());

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < maximum && arr[i] > minimum) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {11, 7, 2, 15};
    int n = arr.size();

    int count = countElements(arr, n);
    cout << count << endl;
    return 0;
}