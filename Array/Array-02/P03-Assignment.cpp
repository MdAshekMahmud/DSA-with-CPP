// Check Sorted Array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool isSorted(vector<int> &arr) {
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> arr = {90, 80, 100, 70, 40, 30};

    cout << s.isSorted(arr);

    return 0;
}