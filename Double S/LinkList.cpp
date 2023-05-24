#include<bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    node* next;

    node()
    {
        value = 0;
        next = nullptr;
    }

    node( int _val )
    {
        value = _val;
        next = NULL;
    }

    void print_value()
    {
        cout << value;
    }

};

node* head;

void insert_at_tail(int value)
{
    if ( head == NULL )
    {
        head = new node ( value );
        return;
    }

    node* tmp = new node ( value );

    node* copy_head = head;

    while ( copy_head -> next != nullptr )
    {
        copy_head = copy_head -> next;
    }
    copy_head -> next = tmp;
}

void bulk_insert_at_tail( vector<int>list_of_element )
{
    for ( int value : list_of_element )
    {
        insert_at_tail(value);
    }
}

void print_linked_list()
{

    node* copy_head = head;

    while( copy_head != nullptr )
    {
        cout << copy_head->value << " ";
        copy_head = copy_head->next;
    }
}

int main()
{

    //    insert_at_tail(1);
    //    insert_at_tail(2);
    //    cout << head -> value <<" "<< head -> next -> value;

    bulk_insert_at_tail ({1, 2, 3, 4});
    print_linked_list();
    return 0;
}
