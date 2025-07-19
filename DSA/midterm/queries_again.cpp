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
    cout << "L -> ";
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
    cout << "R -> ";
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
        // cout <<"pos____________b"<<pos<<val <<endl;
        temp = temp->next;
    }
    // cout <<"pos____________v"<<val <<pos<<endl;
    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;
}

void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
        // cout << "length  " << size(head) << " X  " << x << " V  " << v << endl;
        int length = size(head);
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else if (x == length)
        {
            // cout << "asche " << v;
            insert_at_tail(head, tail, v);
            print_forward(head);
            print_backward(tail);
        }
        else if (x > 0 && x < length)
        {
            insert_any_pos(head, tail, x, v);
            print_forward(head);
            print_backward(tail);
        }

        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}