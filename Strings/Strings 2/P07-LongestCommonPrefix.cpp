#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty())
            return "";

        int n = strs.size();
        sort(strs.begin(), strs.end());

        string s1 = strs[0];
        string s2 = strs[n - 1];
        int i = 0;
        int count = 0;
        while (i < s1.length() && i < s2.length()) {
            if (s1[i] == s2[i])
                count++;
            else
                break;
            i++;
        }

        return s1.substr(0, count);
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};

    string res = sol.longestCommonPrefix(strs);

    cout << res << "\n";

    return 0;
}