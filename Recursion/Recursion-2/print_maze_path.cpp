#include <bits/stdc++.h>
using namespace std;

void printPath(int sr, int sc, int er, int ec, const string &s) {

    if (sr > er || sc > ec) {
        return;
    }

    if (sr == er && sc == ec) {
        cout << s << '\n';
    }

    printPath(sr, sc + 1, er, ec, s + "R");
    printPath(sr + 1, sc, er, ec, s + "D");
}

int main() {

    printPath(1, 1, 3, 3, "");

    return 0;
}
