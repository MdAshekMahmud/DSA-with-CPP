#include <bits/stdc++.h>
using namespace std;

void preInPost(int n) {
    if (n == 0)
        return;

    cout << "Pre: " << n << '\n';

    preInPost(n - 1);

    cout << "In: " << n << '\n';

    preInPost(n - 1);

    cout << "Post: " << n << '\n';
}

int main() {

    preInPost(3);

    return 0;
}