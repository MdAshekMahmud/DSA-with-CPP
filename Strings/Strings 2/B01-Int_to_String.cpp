#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int num = 456;
    string str;

    // Create an empty ss object
    stringstream ss;

    // Insert the integer 'num' into the ss
    // This converts the number into characters inside the stream
    ss << num;
    // Extract the contents of the stream as a string
    // and store it in 'str'
    ss >> str;

    cout << "Integer to String: " << str << '\n';

    return 0;
}