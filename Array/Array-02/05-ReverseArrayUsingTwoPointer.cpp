#include <iostream>
#include <vector>
using namespace std;
int main() {
    // int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int i = 0;
    int j = 4;
    while (i < j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }
    for (int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }
}