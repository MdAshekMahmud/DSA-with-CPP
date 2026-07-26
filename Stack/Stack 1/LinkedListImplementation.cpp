#include <iostream>
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
class Stack
{
public:
    Node *head;
    int size;
    Stack() : head(nullptr), size(0) {}
    // Stack()
    // {
    //     head = nullptr;
    //     size = 0;
    // }
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }
        head = head->next;
        size--;
    }
    int top()
    {
        if (head == nullptr)
        {
            std::cout << "Stack is Empty.";
            return -1;
        }
        return head->val;
    }
    void print(Node *temp)
    {
        if (temp == nullptr)
            return;
        print(temp->next);
        std::cout << temp->val << " ";
    }
    void Display()
    {
        Node *temp = head;
        print(temp);
        std::cout << std::endl;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    std::cout << st.size << std::endl;
    std::cout << st.top() << std::endl;
    st.Display();
}