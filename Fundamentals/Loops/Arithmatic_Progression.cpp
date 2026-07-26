// Display this Arethmatic Progression (AP) - 1,3,5,7,9,...upto 'n' terms.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i += 2) {
        cout << i << " ";
    }
    return 0;
}