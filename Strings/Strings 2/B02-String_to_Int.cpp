#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "123";
    int num;

    // Create a stringstream object initialized with 'str'
    stringstream ss(str);
    // Extract an integer from the stringstream and store it in 'num'
    ss >> num;
    cout << "String to Integer: " << num << '\n';

    return 0;
}