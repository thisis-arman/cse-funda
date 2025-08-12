#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void insert_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    if (head == NULL)
    {
        head = tail = newNode;
    }
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    newNode->prev=temp;
    newNode->next= temp->next;
    temp->next=newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    insert_any_pos(head,tail,1,55);
    insert_any_pos(head,tail,3,55);
    print(head);
    return 0;
}