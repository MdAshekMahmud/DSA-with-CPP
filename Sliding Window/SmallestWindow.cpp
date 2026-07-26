// Smallest window containing 0, 1 and 2
#include <iostream>
using namespace std;

int smallestSubstring(string &s) {
    int one = 0, two = 0, zero = 0;
    int l = 0, r = 0;
    int ans = -1;

    for (r = 0; r < s.length(); r++) {
        if (s[r] == '0') {
            zero++;
        } else if (s[r] == '1') {
            one++;
        } else {
            two++;
        }
        while (one >= 1 and two >= 1 and zero >= 1) {
            if (ans == -1) {
                ans = r - l + 1;
            } else {
                ans = min(ans, r - l + 1);
            }
            if (s[l] == '0') {
                zero--;
            } else if (s[l] == '1') {
                one--;
            } else {
                two--;
            }
            l++;
        }
    }
    return ans;
}

int main() {
    string s = "01212";
    cout << smallestSubstring(s);

    return 0;
}