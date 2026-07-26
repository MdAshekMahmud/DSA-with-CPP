// Find the second largest element in the given array.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    cout << max2 << endl;

    return 0;
}