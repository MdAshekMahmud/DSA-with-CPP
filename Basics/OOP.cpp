#include <iostream>
using namespace std;

class Calculate
{

    // Access Modifiers
public:
    // data member
    int num1 = 50;
    int num2 = 30;

    // member function
    void addition()
    {
        int result = num1 + num2;
        cout << result << endl;
    }
};

int main()
{

    // object declaration
    Calculate add;

    // member function calling
    add.addition();

    return 0;
}