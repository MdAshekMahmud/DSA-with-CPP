#include <bits/stdc++.h>
using namespace std;

int pow_res(int a, int b) {
    if (b < 1) {
        return 1;
    }

    return a * pow_res(a, b - 1);
}

int main() {

    cout << pow_res(3, 2);

    return 0;
}