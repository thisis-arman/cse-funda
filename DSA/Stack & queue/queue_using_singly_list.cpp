#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = next;
    }
};

class myQueue
{
public:
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        ListNode *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    return 0;
}