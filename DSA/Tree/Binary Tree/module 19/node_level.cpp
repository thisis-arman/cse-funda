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
    // 1. take input first value
    int val;
    cin >> val;
    // 2. create root with the first value
    TreeNode *root = new TreeNode(val);
    // 3. take a queue and push the root into queue
    queue<TreeNode *> q;
    q.push(root);

    // 4. run a loop which will the 3 things repeatedly
    while (!q.empty())
    {
        // a. bring out the first data from queue;
        TreeNode *parent = q.front();
        q.pop();

        // b. take two input for left and right, check if its null or not
        //  (-1 means NULL) and create left and right node
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

        parent->left = myLeft;
        parent->right = myRight;

        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
            q.push(parent->right);
    }
    return root;
}

int node_level(TreeNode *root, int searchValue)
{
    if (root == NULL)
        return 0;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        pair<TreeNode *, int> p = q.front();
        q.pop();

        TreeNode *node = p.first;
        int level = p.second;
        if (node->val == searchValue)
            return level;

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
};


void preOrder(TreeNode *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    TreeNode *root = input_tree();
    preOrder(root);

    int val = node_level(root, 60);

    cout<< endl << val ;
    return 0;
}