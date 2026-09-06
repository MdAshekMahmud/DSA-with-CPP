// Sort a string in decreasing order of values associated after removal of values smaller than x.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "AZYZXBDJKX";

    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'X') {
            res += s[i];
        }
    }

    sort(res.rbegin(), res.rend());

    cout << res;

    return 0;
}