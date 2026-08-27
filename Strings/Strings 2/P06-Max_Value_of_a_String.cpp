#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximumValue(vector<string> &strs) {
        int n = strs.size();

        long long maxLen = 0;
        for (int i = 0; i < n; i++) {
            if (all_of(strs[i].begin(), strs[i].end(),
                       [](unsigned char c) { return isdigit(c); })) {
                long long x = stoll(strs[i]);
                maxLen = max(maxLen, x);
            } else {
                long long currMax = 0;
                for (char c : strs[i]) {
                    currMax++;
                }
                maxLen = max(currMax, maxLen);
            }
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"alic3", "bob", "3", "4", "00000"};

    cout << sol.maximumValue(strs);

    return 0;
}