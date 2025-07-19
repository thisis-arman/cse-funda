#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(ListNode *head)
{

    ListNode *temp = head;
    cout << "L->";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(ListNode *tail)
{

    ListNode *temp = tail;
    cout << "R->";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_any_pos(ListNode *&head, ListNode *&tail, int pos, int val)
{
    ListNode *newNode = new ListNode(val);

    ListNode *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
        
    }
    newNode->prev = temp;
    newNode->next = temp->next;
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else if (size(head) > v)
        {
            insert_any_pos(head, tail, x, v);
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}