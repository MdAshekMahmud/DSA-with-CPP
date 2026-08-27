#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;

    ss << "Hello, world!";
    cout << "Before clearing: " << ss.str() << endl;

    // Clear the contents of the ss
    ss.str("");

    // Reset the ss's state flags (like eof, fail)
    ss.clear();

    // Now we can reuse the ss for new data
    ss << "New data!";
    cout << "After clearing and reuse: " << ss.str() << endl;

    return 0;
}