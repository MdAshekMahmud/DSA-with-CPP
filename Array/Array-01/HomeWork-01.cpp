// Program to find the minimum (or maximum) element of an array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMin(const vector<int> &arr) {
    return *min_element(arr.begin(), arr.end());
}

int getMax(const vector<int> &arr) {
    return *max_element(arr.begin(), arr.end());
}

class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        return {getMin(arr), getMax(arr)};
    }
};

int main() {
    Solution s;

    vector<int> arr = {2, 4, 6, 7, 9, 8, 3, 11};

    cout << "Minimum element of array: " << s.getMinMax(arr)[0] << "\n";
    cout << "Minimum element of array: " << s.getMinMax(arr)[1] << "\n";

    return 0;
}