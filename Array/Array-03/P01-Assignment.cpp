// Triplet Sum in Array
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();

        // Fix the first element as arr[i]
        for (int i = 0; i < n - 2; i++) {

            // Fix the second element as arr[j]
            for (int j = i + 1; j < n - 1; j++) {

                // Now look for the third number
                for (int k = j + 1; k < n; k++) {
                    if (arr[i] + arr[j] + arr[k] == target)
                        return true;
                }
            }
        }

        return false;
    }
};

int main() {
    Solution s;
    vector<int> arr = {40, 20, 10, 3, 6, 7};
    int target = 13;
    if (s.hasTripletSum(arr, target))
        cout << "true";
    else
        cout << "false";
    return 0;
}