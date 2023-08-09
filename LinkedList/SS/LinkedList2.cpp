#include<bits/stdc++.h>
using namespace std;

#define DUMMY 0


struct node
{
    int value;
    node *next;

    node ()
    {
        value = 0;
        next = NULL;
    }

    node ( int _value)
    {
        value = _value;
        next = NULL;
    }
};



node *head = new node(DUMMY);

void insert_at_tail( int value )
{
    node *copy_head = head;

    while ( copy_head->next  != NULL )
    {
        copy_head = copy_head->next;
    }
    copy_head->next = new node (value);
}

void insert_at_head( int value )
{
    node *nextNode = head->next;
    head->next = new node ( value );
    head->next->next = nextNode;
}

int get_element_at( int index )
{
    node *current = head->next;
    while ( index-- )
    {
        current = current->next;
    }

    return current->value;
}

void delete_at ( int position )
{
    node *curr = head;

    for ( int i = 0; i < position; i++ )
    {
        curr = curr->next;
    }

    node* nextnode = curr->next->next;
    curr->next = nextnode;

}

void add_at ( int value, int position )
{
    node* curr = head;

    while ( position-- )
    {
        curr = curr->next;
    }

    node* nextNode = curr->next;
    curr->next = new node(value);
    curr->next->next = nextNode;

}

void print_linked_list ()
{
    node *copy_head = head -> next;

    while( copy_head != NULL)
    {
        cout << copy_head->value<<"-> ";
        copy_head  = copy_head->next;
    }
}



int main()
{

    insert_at_tail(1);
    insert_at_tail(7);
    insert_at_tail(3);
    insert_at_head(5);
    insert_at_head(9);
    insert_at_head(11);
//    get_element_at( 2 );

    //delete_at(2);
    add_at(100, 3);

    print_linked_list();

//    cout <<"Get element : "<< get_element_at( 2 ) << endl;



    return 0;
}

