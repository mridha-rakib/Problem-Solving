#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left = nullptr, *right = nullptr;
    Node() {}
    Node(int data): data(data) {}
};

void inorder( Node *root )
{
    if ( root == nullptr )
        return;

    inorder( root->left );
    cout << root->data << " ";
    inorder( root->right );
}

Node *insert(Node *root, int key)
{
    if (root == nullptr)
        return new Node (key);
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}


Node* constructBST(vector<int> const &keys)
{
    Node* root = nullptr;
    for (int key: keys)
    {
        root = insert(root, key);
    }
    return root;
}

int main()
{

    vector<int> keys = { 15, 10, 20, 8, 12, 16, 25 };

    Node* root = constructBST(keys);
    inorder(root);

    return 0;
}
