#include<bits/stdc++.h>
using namespace std;

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



node *head = NULL;

void insert_at_tail( int value )
{
    node *copy_head = head;

    while ( copy_head->next  != NULL )
    {
        copy_head = copy_head->next;
    }
    copy_head->next = new node(value);
}

//void Bulk_insert_at_tail(vector<int> list_of_element)
//{
//    for ( auto value : list_of_element )
//    {
//        insert_at_tail(value);
//    }
//}


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
    insert_at_tail(2);
    insert_at_tail(3);
    print_linked_list();

//    Bulk_insert_at_tail({5, 6, 7, 8});

//    cout << head->value <<"->" << head->next->value<<endl;

    return 0;
}
