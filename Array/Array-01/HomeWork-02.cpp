#include <iostream>
#include <vector>
#include <stdbool.h>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();

        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0 && arr[i] <= n) {
                visited[arr[i] - 1] = true;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!visited[i - 1]) {
                return i;
            }
        }
        return n + 1;
    }
};

int main() {
    Solution s;

    vector<int> arr = {0, 1, 4, 5};

    cout << s.missingNumber(arr);
}