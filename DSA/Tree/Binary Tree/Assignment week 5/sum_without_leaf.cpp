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
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int sum = 0;
// int sum_without_leaf(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     if (root->left != NULL && root->right!=NULL)
//     {
//         sum+=root->val;
//     }else{
//         return 0;
//     }
//     queue<TreeNode *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         TreeNode *p = q.front();
//         q.pop();

//         if (p->left != NULL && p->right != NULL)
//         {
//             cout <<" ---- val "<<p->val<<endl;
//             sum += p->val;
//         }

//         if (p->left)
//         {
//             q.push(p->left);
//         }
//         if (p->right)
//         {
//             q.push(p->right);
//         }
//     }

//     return sum;
// }

int preOrder(TreeNode *root)
{
    if (root == NULL)
        return;
        if (root->left != NULL && root->right != NULL)
        {
            cout <<" ---- val "<<root->val<<endl;
            sum += root->val;
        }

   int l= preOrder(root->left);
    int r=preOrder(root->right);
    return l+r;
}

int main()
{
    TreeNode *root = input_tree();
    int sum = preOrder(root);

    cout << sum;

    return 0;
}