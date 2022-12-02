#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int data) : data(data), left(nullptr), right(nullptr) {}
};

void inorder(Node *root)
{
    if (!root) {
        return;
    }
    else {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Para preorder y postorder, solo cambia el orden de las llamadas recursivas

void preorder(Node *root)
{
    if (!root) {
        return;
    }
    else {
        cout << root->data << " ";
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(Node *root)
{
    if (!root) {
        return;
    }
    else {
        inorder(root->left);
        inorder(root->right);
        cout << root->data << " ";
    }
}