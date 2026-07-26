#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int Sum(Node *a)
{
    if (a == nullptr)
        return 0;
    int leftSum = Sum(a->left);
    int rightSum = Sum(a->right);
    int ans = a->val + leftSum + rightSum;
    return ans;
}
void display(Node *a)
{
    if (a)
    {
        cout << a->val << " ";
        display(a->left);
        display(a->right);
    }
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);
    cout << endl;
    cout << "Sum is " << Sum(a);

    return 0;
}