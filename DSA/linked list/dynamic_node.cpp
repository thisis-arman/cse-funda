#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // head store the address of node in stack memory;
    //  and new Node is created in heap memory which is dynamic ;
    // head is just a pointer
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    // cout << head->val<<" "<<head->next->val <<" "<<head->next->next->val;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}