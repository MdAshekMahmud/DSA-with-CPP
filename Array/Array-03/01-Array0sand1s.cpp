/*
* Q: Segregate 0s and 1s:
    Given an array arr[] consisting of only 0's and 1's.
    Modify the array in - place to segregate 0s onto the left side and
    1s onto the right side of the array.
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size();

        int i = 0, j = n - 1;

        while (i < j) {
            if (arr[i] == 0)
                i++;
            if (arr[j] == 1)
                j--;

            if (i > j)
                break;

            if (arr[i] == 1 && arr[j] == 0) {
                arr[i] = 0;
                arr[j] = 1;

                i++;
                j--;
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> arr = {0, 1, 0, 1, 1, 1};

    s.segregate0and1(arr);

    for (auto el : arr) {
        cout << el << ' ';
    }

    return 0;
}