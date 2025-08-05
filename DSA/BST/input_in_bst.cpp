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

void input_in_bst(TreeNode *&root, int val)
{
    //  1. first check root is null or not if null then root node should be created
    if (root == NULL)
    {
        root = new TreeNode(val);
    }
    // 2.root er value jodi input value theke boro hoi tahole root er left khali ache kina check kore dekhbo jodi khali thake oikhane nuton node create korbo else recursion call korbo root->left pass kore
    if (root->val > val)
    {
        if (root->left == NULL)
        root->left = new TreeNode(val);
        else
        input_in_bst(root->left, val);
    }
    // 3.root er value jodi input value theke choto hoi tahole root er right khali ache kina check kore dekhbo jodi khali thake oikhane nuton node create korbo else recursion call korbo root->right pass kore
    else
    {
        if (root->right == NULL)
            root->right = new TreeNode(val);
        else
            input_in_bst(root->right, val);
    }
};

int main()
{
    TreeNode *root = input_tree();
    int val;
    cin >> val;
    input_in_bst(root, val);
    preOrder(root);
    return 0;
}