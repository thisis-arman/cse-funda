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

class myStack
{
public:
    ListNode *head = NULL;
    ListNode *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        ListNode *deleteNode = tail;
        tail->prev->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    myStack st;
    myStack st2;
    int q;
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    int q2;
    cin >> q2;
    while (q2--)
    {
        int val;
        cin >> val;
        st2.push(val);
    }
    
    bool status = true;
    if (st.size() != st2.size())
    {

        status = false;
        return 0;
    }

    for (int i = 1; i <= st.size(); i++)
    {
        if (st.top() != st2.top())
        {

            status = false;
            cout << st.top() <<endl;
            return 0;
        }
        st.pop();
        st2.pop();
    }

    cout << status;

    return 0;
}