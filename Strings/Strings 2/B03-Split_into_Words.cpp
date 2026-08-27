#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence = "C++ is powerful";
    string word;

    // Create a ss object initialized with the sentence
    // This lets us read word by word like a stream
    stringstream ss(sentence);

    // Extract words from the ss one by one until no more
    // words left
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}