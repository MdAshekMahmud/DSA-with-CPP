// Given a sentence 'str' return the word that is occuring most
// number of times in that sentence.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "He is a math teacher. He is a DSA mentor as well";

    stringstream ss(str);
    string word;

    unordered_map<string, int> ans;

    while (ss >> word) {
        ans[word]++;
    }
    int maxWord = 0;
    for (auto el : ans) {
        if (el.second > maxWord) {
            maxWord = el.second;
        }
    }

    for (auto el : ans) {
        if (el.second == maxWord) {
            cout << el.first << " " << el.second << '\n';
        }
    }

    // Using vector
    /*
    vector<string> v;
    while (ss >> word) {
        v.push_back(word);
    }

    sort(v.begin(), v.end());
    int maxCount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }
    */

    return 0;
}