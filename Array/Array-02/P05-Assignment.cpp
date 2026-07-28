// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include <iostream>
#include <vector>
using namespace std;

void changeElement(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] *= 2;
        } else {
            arr[i] += 10;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 9, 11};

    changeElement(arr);

    for (auto el : arr) {
        cout << el << ' ';
    }

    return 0;
}