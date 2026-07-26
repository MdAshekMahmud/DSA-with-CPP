#include <iostream>
using namespace std;

#define MAX 100

class Stack
{
private:
    int topIndex = -1;
    int arr[MAX]; // Make array a member of the class

public:
    void push(int val)
    {
        if (topIndex < MAX - 1)
        {
            topIndex++;
            arr[topIndex] = val;
        }
        else
        {
            cout << "Stack Overflow.";
            return;
        }
    }

    void pop()
    {
        int value = arr[topIndex];
        if (topIndex >= 0)
        {
            topIndex--;
        }
        else
        {
            cout << "Stack Underflow.";
            return;
        }
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow.";
            return -1;
        }
        return arr[topIndex];
    }

    int size()
    {
        return topIndex + 1;
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
    void Display()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.Display();
    return 0;
}