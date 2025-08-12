#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while (temp!=NULL){
        cout <<temp->val<<endl;
        temp=temp->next;
    }
}
int main()
{

    Node* head= new Node(10);
    Node* a= new Node(20);
    Node* b= new Node(30);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    print(head);
    return 0;
}