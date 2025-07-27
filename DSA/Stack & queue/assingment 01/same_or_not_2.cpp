#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {

        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = next;
    }
};

class myQueue
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
        tail = newNode;
    }
    void pop()
    {
        sz--;
        ListNode *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};
    

int main()
{
    myQueue q;
    myStack st;

    int a,b;
    cin>>a>>b;
     bool status = true;
    if (a != b)
    {
        status = false;
        
    }else{
    while (a--)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while (b--)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            status = false;
            break;
        }
        st.pop();
        q.pop();
    }}
    if (status)
        cout << "YES";
    else
        cout << "NO";
    return 0;


    return 0;
}