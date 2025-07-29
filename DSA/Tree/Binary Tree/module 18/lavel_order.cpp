#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *left;
    ListNode *right;
    ListNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(ListNode *root)
{
    queue<ListNode *> q;
    q.push(root);

    while (!q.empty())
    {
        ListNode *f = q.front();
        cout << f->val << " ";
        q.pop();
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    ListNode *root = new ListNode(10);
    ListNode *a = new ListNode(20);
    ListNode *b = new ListNode(30);
    ListNode *c = new ListNode(40);
    ListNode *d = new ListNode(50);
    ListNode *e = new ListNode(60);
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    level_order(root);

    return 0;
}