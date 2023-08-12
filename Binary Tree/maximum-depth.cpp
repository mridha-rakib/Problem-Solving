#include<bits/stdc++.h>
using namespace std;

struct Node {
    int _value;
    Node *_left, *_right;

    Node (int value) {
        this -> _value = value;
        this -> _left = _right = nullptr;
    }
};

int height (Node *root) {
    int depth = 0;
    queue<Node*>Q;

    Q.push(root);
    Q.push(nullptr);

    while (!Q.empty()) {

    }
}


int main()
{
    Node *root = new  Node(1);
    Node *left = new Node (2);
    Node *right = new Node (3);

    root -> left -> left = new Node (4);
    root -> left -> right = new Node (5);

    return 0;
}
