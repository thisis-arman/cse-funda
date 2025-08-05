#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *input_tree()
{
    int val;
    cin >> val;
    TreeNode *root = new TreeNode(val);
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        TreeNode *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new TreeNode(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new TreeNode(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(myLeft);
        }
        if (p->right)
        {
            q.push(myRight);
        }
    }
    return root;
}

bool search_bst(TreeNode *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;

    if (root->val > val)
        return search_bst(root->left, val);
    else
        return search_bst(root->right, val);
}

void preOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    TreeNode *root = input_tree();
    preOrder(root);
    int val;
    cin >> val;
    if (search_bst(root, val))
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }
    return 0;
}