// Take 3 numbers input and tell if they can be the sides of a triangle
#include <iostream>

int main()
{
    int i, j, k;
    std::cout << "Enter the first side: ";
    std::cin >> i;
    std::cout << "Enter the second side: ";
    std::cin >> j;
    std::cout << "Enter the third side: ";
    std::cin >> k;
    if ((i + j) > k && (j + k) > i && (k + i) > j)
    {
        std::cout << "Valid triangle" << std::endl;
    }
    else
    {
        std::cout << "Invalid triangle" << std::endl;
    }
    return 0;
}