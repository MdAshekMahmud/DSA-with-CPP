#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 1, 2, 1, 1};
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    // 0 1 2 3 4 5 6 7 8 9 A B C D E F

    return 0;
}