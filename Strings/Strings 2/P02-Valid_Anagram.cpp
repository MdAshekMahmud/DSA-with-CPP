#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        vector<int> ch(26, 0);
        for (int i = 0; i < n; i++) {
            ch[s[i] - 'a']++;
        }

        for (int i = 0; i < m; i++) {
            if (ch[t[i] - 'a'] == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string s = "anagram";
    string t = "nagaram";

    Solution sol;
    cout << sol.isAnagram(s, t) << '\n';

    return 0;
}