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

void insert_at_tail(Node *&head,Node* &tail, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if(temp->next==NULL){
        temp->next=newNode;
    }
    tail->next= newNode;
};

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head,tail, 45);
    print_linked_list(head);

    return 0;
}