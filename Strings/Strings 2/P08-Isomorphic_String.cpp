#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        for (int i = 0; i < s.length(); i++) {
            if (mp1.find(s[i]) != mp1.end()) {
                auto el = mp1.find(s[i]);
                if (el->second != t[i]) {
                    return false;
                }
            } else {
                mp1[s[i]] = t[i];
            }
            if (mp2.find(t[i]) != mp2.end()) {
                auto el = mp2.find(t[i]);
                if (el->second != s[i]) {
                    return false;
                }
            } else {
                mp2[t[i]] = s[i];
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "egg";
    string t = "add";

    cout << sol.isIsomorphic(s, t) << '\n';
    return 0;
}