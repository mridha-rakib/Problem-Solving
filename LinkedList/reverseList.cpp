#include<bits/stdc++.h>
using namespace std;

class ListNode
{
private:
    int value_;
    ListNode* next_;
public:
    ListNode(int value): value_(value), next_(nullptr) {};
    int getValue() const
    {
        return value_;
    }
    ListNode* getNext() const
    {
        return next_;
    }
    void setNext(ListNode* next)
    {
        next_ = next;
    }
};


class LinkedList
{
private:
    ListNode* head_;
public:
    LinkedList() : head_(nullptr) {};
    ListNode* getHead() const
    {
        return head_;
    }
    void setHead(ListNode* head)
    {
        head_ = head;
    }

    void reverse()
    {
        ListNode* newHead = nullptr;
        ListNode* current = head_;

        while (current)
        {
            ListNode* next = current->getNext();
            current->setNext(newHead);
            newHead = current;
            current = next;
        }

        head_ = newHead;
    }
};


int main()
{


    return 0;
}
