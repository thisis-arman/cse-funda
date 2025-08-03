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

pair<TreeNode *,int>input_tree()
{
    int count =0;
    int val;
    cin >> val;
    TreeNode *root = new TreeNode(val);
    queue<TreeNode *> q;
    q.push(root);
    count ++;
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
            count ++;
        }

        if (p->right)
        {
            q.push(p->right);
            count ++;
        }
    }
    return {root,count};
}

int max_depth(TreeNode* root){
    if(root==NULL)return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l,r)+1;
}

int main()
{
    pair<TreeNode *,int>root = input_tree();
    int mx= max_depth(root.first);
    int val=pow(2,mx)-1;
    // cout <<val;
    // cout <<root.second;
    if(root.second==val){
        cout<< "YES";
    }else{
        cout<<"NO";
    }


    return 0;
}