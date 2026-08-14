// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int n = arr.size();

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        for (auto el : mp) {
            if (el.second < 2) {
                return el.first;
            }
        }
        return 0;
    }
};

int main() {
    Solution s;
    vector<int> arr = {2, 30, 2, 15, 20, 30, 15};

    cout << s.findUnique(arr) << '\n';

    return 0;
}