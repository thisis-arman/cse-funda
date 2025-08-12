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

void insert_numbers(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(ListNode *&head, ListNode *temp)
{

    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse(head, temp->next);
    temp->next = temp->next->next;
}
bool is_palindrome(ListNode *head, ListNode *tail, int length)
{
    bool palindrome = true;

    ListNode *i = head;
    ListNode *j = tail;

    for (int k = 0; k < length / 2; k++)
    {
        if (i->val != j->val)
        {
            palindrome = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    return palindrome;
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

int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        insert_numbers(head, tail, val);
    }

    int length = size(head);
    if (is_palindrome(head, tail, length))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}