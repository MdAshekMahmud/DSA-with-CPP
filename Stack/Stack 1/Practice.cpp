#include <iostream>
#include <stack>
using namespace std;
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
};
void display(stack<int> stk)
{
    if (stk.size() == 0)
        return;
    int x = stk.top();
    cout << x << " ";
    stk.pop();
    display(stk);
    stk.push(x);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    display(st);
}