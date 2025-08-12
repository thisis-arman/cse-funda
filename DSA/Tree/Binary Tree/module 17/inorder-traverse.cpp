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

void inOrder(ListNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);       // left
    cout << root->val << endl; // root
    inOrder(root->right);      // right
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
    inOrder(root);
    return 0;
}