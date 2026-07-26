/* If cost price and selling price of an item is input through
the keyboard,write a program to determine whether the seller has made profit or loss
*/
#include <iostream>
using namespace std;

int main()
{
    float costPrice, sellingPrice;

    // Input cost price and selling price
    cout << "Enter the cost price : ";
    cin >> costPrice;
    cout << "Enter the selling price : ";
    cin >> sellingPrice;

    // Determine profit or loss
    if (sellingPrice > costPrice)
    {
        cout << "Profit : " << sellingPrice - costPrice << endl;
    }
    else if (sellingPrice < costPrice)
    {
        cout << "Loss : " << costPrice - sellingPrice << endl;
    }
    else
    {
        cout << "No profit, no loss." << endl;
    }

    return 0;
}