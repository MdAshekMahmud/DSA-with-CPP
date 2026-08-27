/*Q: Given a string consisting of lowercase English alphabets.
Print the character that is occuring most number of times.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "leet code";

    vector<int> ans(26, 0);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            ans[s[i] - 'a']++;
        }
    }

    int max1 = 0;
    int maxIdx = 0;
    for (int i = 0; i < 26; i++) {
        if (ans[i] > max1) {
            max1 = ans[i];
            maxIdx = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (ans[i] == max1) {
            cout << static_cast<char>(i + 'a') << " " << ans[i] << '\n';
        }
    }

    return 0;
}