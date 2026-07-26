#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};
void levelOrder(Node *root)
{
    if (root == nullptr)
        return;
    queue<Node *> Q;
    Q.push(root);

    while (!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();
        cout << curr->data << " ";

        if (curr->left != nullptr)
            Q.push(curr->left);

        if (curr->right != nullptr)
            Q.push(curr->right);
    }
    cout << endl;
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    levelOrder(a);
}