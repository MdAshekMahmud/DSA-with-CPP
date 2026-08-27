#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int age = 22;
    string name = "Mahmud";

    stringstream ss;
    // Insert multiple pieces of data (text, variables)
    // into the ss
    ss << "Name: " << name << ", Age: " << age;
    // Get the combined string from the ss
    string result = ss.str();

    cout << result << endl;

    return 0;
}