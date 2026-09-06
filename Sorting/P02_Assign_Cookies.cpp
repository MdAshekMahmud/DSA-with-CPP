#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0, cookies = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                cookies++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return cookies;
    }
};

int main() {
    Solution sol;
    vector<int> g = {9, 10, 7, 8};
    vector<int> s = {5, 6, 7, 8};

    cout << sol.findContentChildren(g, s) << '\n';

    return 0;
}