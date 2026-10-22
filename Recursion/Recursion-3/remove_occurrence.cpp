#include <bits/stdc++.h>
using namespace std;

void remove_char(string s, string &res, int idx) {
    if (idx == s.length()) {
        return;
    }

    if (tolower(s[idx]) != 'a') {
        res += s[idx];
    }

    remove_char(s, res, idx + 1);
}

int main() {
    string str = "Md Ashek Mahmud";

    string res = "";
    remove_char(str, res, 0);

    cout << res;

    return 0;
}