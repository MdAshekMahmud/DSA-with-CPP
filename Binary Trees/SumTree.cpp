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

class Solution {
public:
    int isSum(Node *root) {
        if (root == nullptr)
            return 0;
        return root->data + isSum(root->left) + isSum(root->right);
    }
    bool isSumTree(Node *root) {
        if (root == nullptr)
            return true;

        // Leaf nodes are considered sum trees
        if (root->left == nullptr && root->right == nullptr)
            return true;

        int leftSum = isSum(root->left);
        cout << "LeftSum = " << leftSum << endl;
        int rightSum = isSum(root->right);
        cout << "RightSum = " << rightSum << endl;

        bool leftIsSumTree = isSumTree(root->left);
        cout << "leftIsSumTree = " << leftIsSumTree << endl;
        bool rightIsSumTree = isSumTree(root->right);
        cout << "rightIsSumTree = " << rightIsSumTree << endl;

        cout << "leftSum + rightSum = " << leftSum + rightSum << endl;

        return (leftSum + rightSum == root->data) && leftIsSumTree && rightIsSumTree;
    }
};

int main() {
    // Create a sample sum tree
    //       26
    //      /  \ 
    //    10    3
    //   / \   / \
    //  4   6 1   2

    Node *root = new Node(26);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(6);
    root->right->left = new Node(1);
    root->right->right = new Node(2);

    Solution sol;

    if (sol.isSumTree(root)) {
        cout << "The tree is a Sum Tree" << endl;
    } else {
        cout << "The tree is not a Sum Tree" << endl;
    }

    // Test with a non-sum tree
    // Node *root2 = new Node(20);
    // root2->left = new Node(10);
    // root2->right = new Node(3);

    // if (sol.isSumTree(root2)) {
    //     cout << "The tree is a Sum Tree" << endl;
    // } else {
    //     cout << "The tree is not a Sum Tree" << endl;
    // }

    return 0;
}