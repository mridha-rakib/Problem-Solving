#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int _value;
    TreeNode* _left;
    TreeNode* _right;

    TreeNode(int value) {
        _value = value;
        _left = nullptr;
        _right = nullptr;
    }
};

TreeNode* insertNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root -> _value) {
        root -> _left = insertNode(root -> _left, value);
    } else {
        root -> _right = insertNode(root -> _right, value);
    }
    return root;
}

TreeNode* createBSTFromArray(vector<int>& nums) {
    if (nums.empty()) return nullptr;

    TreeNode* root = nullptr;
    for (int num : nums) {
        root = insertNode(root, num);
    }
    return root;
}

void inOrderTraversal(TreeNode* root) {

    if (root == nullptr) return;

    inOrderTraversal(root -> _left);
    cout << root -> _value << " ";
    inOrderTraversal(root -> _right);
}

int main()
{
    vector<int> nums = {10, 7, 14, 20, 1, 5, 8};
    TreeNode* root = createBSTFromArray(nums);
    inOrderTraversal(root);
    return 0;
}
