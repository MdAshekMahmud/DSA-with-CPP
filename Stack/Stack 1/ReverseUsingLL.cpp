#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
};

// Stack class using a singly linked list
class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {} // Initialization Lists  -  this is more efficient

    // Stack()  // Assignment in Constructor Body
    // {
    //     top=nullptr;
    // }

    // Push an element onto the stack
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    // Pop an element from the stack
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        Node *temp = top;
        int poppedValue = temp->data;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        return top == nullptr;
    }

    // Reverse the stack using a singly linked list
    void reverse()
    {
        Node *prev = nullptr;
        Node *current = top;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        top = prev;
    }

    // Display the stack elements
    void display()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    cout << "Original Stack: ";
    stack.display();

    stack.reverse();

    cout << "Reversed Stack: ";
    stack.display();

    return 0;
}