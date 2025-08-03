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


vector<int> leaf_nodes(TreeNode* root){
    queue<TreeNode*> q;
    vector<int> v;
    q.push(root);
    while(!q.empty()){
        TreeNode* p= q.front();
        q.pop();
        if(p->left==NULL && p->right==NULL){
            v.push_back(p->val);
        }
        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return v;
}

int main()
{
    TreeNode *root = input_tree();
    // int sum = preOrder(root);
    vector<int> data= leaf_nodes(root);
    sort(data.begin(),data.end(),greater<int>());

    for(int a:data){
        cout <<a <<" ";
    }

    return 0;
}