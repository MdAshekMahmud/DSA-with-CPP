#include <bits/stdc++.h>
using namespace std;

void printSubset(string res, string s, int idx) {
    if (idx == s.length()) {
        cout << res << '\n';
        return;
    }

    printSubset(res, s, idx + 1);
    printSubset(res + s[idx], s, idx + 1);
}

int main() {
    string s = "abc";
    printSubset("", s, 0);

    return 0;
}