// Q: Input a string of length n and count all the vowels
// int the given string.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    char str[n];

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    int vowelCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowelCount++;
        }
    }

    cout << "Total vowels: " << vowelCount << '\n';
    return 0;
}