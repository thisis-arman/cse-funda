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

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};

int sz(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {

        
        cnt += 1;
        temp= temp->next;
    }
    return cnt;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (temp == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    tail = newNode;
};


bool is_simillar(Node* head1, Node* head2)
{
    Node* temp1 = head1;
    Node* temp2 = head2;

    for ( ; temp1 != NULL && temp2 != NULL;    
          temp1 = temp1->next, temp2 = temp2->next)  
    {
        if (temp1->val != temp2->val)           
            return false;
    }

    // both must reach NULL together; otherwise lengths differ
    return temp1 == NULL && temp2 == NULL;
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    // print_linked_list(head1);
    // print_linked_list(head2);
   if(sz(head1)==sz(head2)){
    
    if(is_simillar(head1,head2)==true){
        cout << "YES";
    }else{

        cout <<"NO";
    }

   }else{
    cout <<"NO";
   }

    return 0;
}