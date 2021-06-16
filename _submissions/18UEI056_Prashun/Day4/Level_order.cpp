/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    // int k=0;
    queue<TreeNode*>q;
    q.push(A);
    // vector<bool>visited;
    while(!q.empty())
    { int len=q.size();
        vector<int>temp;
    while(len)
    {TreeNode* x=q.front();
    temp.push_back(x->val);
    q.pop();
    if(x->left!=NULL)
     q.push(x->left);
    if(x->right!=NULL)
        q.push(x->right);
    len--;
    }
    ans.push_back(temp);
    }
    return ans;
}
