#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
};

class nodeOperation
{
public:
    void pushNode( class node **head_ref, int data_val )
    {
        class node *new_node = new node();
        new_node->data = data_val;

        new_node->next = *head_ref;
        *head_ref = new_node;
    }
};


int main()
{
    class node *head = NULL;
    class nodeOperation *tmp = new nodeOperation();

    for ( int i = 5; i > 0 ; i-- )
    {
        tmp -> pushNode( &head, i );
    }

    vector<int>v;

    while ( head != NULL )
    {
        v.push_back(head->data);
        head = head->next;
    }


    return 0;
}
