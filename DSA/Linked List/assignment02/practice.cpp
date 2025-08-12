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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void insert_at_head(Node* &head,int val){
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}

void insert_any_pos(Node* &head,int pos,int val){

    Node* newNode = new Node(val);
    Node* temp =head;
    for(int i =1;i<pos;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;

};

void delete_any_pos(Node* head,int pos){
    Node* temp = head;
    for(int i=1;i<pos;i++){
        temp=temp->next;
    }
    Node* deleteNode= temp->next;
    temp->next=deleteNode->next;
    delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;
    insert_at_tail(head,tail,40);
    insert_at_head(head,50);
    insert_any_pos(head,2,70);
    delete_any_pos(head,3);
    print_linked_list(head);

    return 0;
}