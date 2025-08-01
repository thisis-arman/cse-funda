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

ListNode *level_tree()
{
    int val;
    cin >> val;
    ListNode *root = new ListNode(val);
    queue<ListNode *> q;
    q.push(root);
    while (!q.empty())
    {
        // ber kore ana
        ListNode *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        // oi node niye kaj kora
        ListNode *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new ListNode(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new ListNode(r);

        p->left = myLeft;
        p->right = myRight;
        //  children push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

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

int count_leaf_node(ListNode* root){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)  
            return 1;
   int l= count_leaf_node(root->left);
   int r= count_leaf_node(root->right);
   return l+r;
}

int main()
{
    ListNode *root = level_tree();
    level_order(root);
    cout <<endl<< count_leaf_node(root);
    return 0;
}