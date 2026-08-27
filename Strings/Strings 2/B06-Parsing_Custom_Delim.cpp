#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string csvData = "Apple,Banana,Orange,Grapes";
    stringstream ss(csvData);
    string item;

    // Read until a comma is encountered
    while (getline(ss, item, ',')) {
        cout << item << '\n';
    }

    return 0;
}