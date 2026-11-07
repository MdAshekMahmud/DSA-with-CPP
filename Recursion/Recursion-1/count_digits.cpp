#include <bits/stdc++.h>
using namespace std;

int digit_count(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + digit_count(n / 10);
}

int main() {
    cout << digit_count(120034);

    return 0;
}