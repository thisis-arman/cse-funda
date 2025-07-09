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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL)
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
}

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt += 1;
    }
    return cnt;
}

int find_index(Node *head, int q,int length)
{
    Node *temp = head;
    // cout <<"length ----"<<length<<endl;
    int idx = -1;
    for (int i = 0; i < length; i++)
    {
        if (temp->val == q)
        {
            idx = i;
            // cout <<i<<"i printing"<<endl;
            break;
        }
        temp = temp->next;
    }
    return idx;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
            {
                break;
            }
            insert_at_tail(head, tail, val);
        }
        int q;
        cin >> q;
         int length = size(head);
        cout << find_index(head, q,length) << endl;
    }
    return 0;
}