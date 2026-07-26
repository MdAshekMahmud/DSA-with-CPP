// 3.Longest Substring Without Repeating Characters. [LeetCode]
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> st;
            for (int j = i; j < n; j++) {
                if (st.find(s[j]) != st.end()) {
                    break;
                }
                maxLen = max(maxLen, j - i + 1);
                st.insert(s[j]);
            }
        }
        return maxLen;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s = "abcabcbb";

    auto result = sol.lengthOfLongestSubstring(s);

    // Print result
    cout << result << endl;

    return 0;
}