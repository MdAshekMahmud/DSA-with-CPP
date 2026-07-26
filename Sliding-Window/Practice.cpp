#include <iostream>
using namespace std;

class Solution {
private:
    string name;

public:
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }

    void display() {
        cout << name << '\n';
    }
};

int main() {

    Solution s;
    s.setName("Ashek Mahmud");
    cout << s.getName() << '\n';
    s.display();

    return 0;
}