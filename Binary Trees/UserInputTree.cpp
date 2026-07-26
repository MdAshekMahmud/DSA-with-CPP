#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

Node *createNode() {
    int x;
    cout << "Enter the data (-1 for null): ";
    cin >> x;
    if (x == -1) {
        return nullptr;
    }

    Node *newnode = new Node(x);
    cout << "Enter left child of " << x << ":\n";
    newnode->left = createNode();
    cout << "Enter right child of " << x << ":\n";
    newnode->right = createNode();

    return newnode;
}

void display(Node *root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    display(root->left);
    display(root->right);
}

int main() {
    Node *root = nullptr;

    cout << "=== Binary Tree Creation ===" << endl;
    root = createNode();

    cout << "\n=== Preorder Traversal ===" << endl;
    display(root);
    cout << endl;

    return 0;
}