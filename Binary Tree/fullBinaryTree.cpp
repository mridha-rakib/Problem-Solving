#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int _data;
    Node *_left, *_right;

    Node(int data)
    {
        this -> _data = data;
        this -> _left = this -> _right = nullptr;
    }
};


void inorder (Node *root)
{
    if (root == nullptr) return;
    inorder(root -> _left);
    cout << root -> _data << " ";
    inorder (root -> _right);
}

Node *buildTree (auto &preorder, int &pIndex, int start, int end, auto &map)
{
    Node *root = new Node (preorder[pIndex]);

    pIndex++;
    if (pIndex == preorder.size())
    {
        return root;
    }
    int index = map[preorder[pIndex]];
    if (start <= index && index + 1 <= end - 1)
    {
        root -> _left = buildTree (preorder, pIndex, start, index, map);
        root -> _right = buildTree(preorder, pIndex, index + 1, end - 1, map);
    }
    return root;
}

Node *buildTree (auto const &preorder, auto const &postorder)
{
    if (preorder.size() == 0) return nullptr;
    unordered_map<int, int> mp;

    for (int i = 0; i < postorder.size(); i++)
    {
        mp[postorder[i]] = i;
    }
    int pIndex = 0;
    int start = 0;
    int end = preorder.size() - 1;

    return buildTree(preorder, pIndex, start, end, mp);
}


int main()
{
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 8, 9, 7};
    vector<int> postorder = {4, 5, 2, 8, 9, 6, 7, 3, 1};

    Node *root = buildTree(preorder, postorder);
    cout << "Inorder traversal is : ";
    inorder(root);

    return 0;
}
