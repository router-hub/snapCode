/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    queue<TreeNode*>q;
    vector<int>ans;
    q.push(A);
    while(!q.empty())
    { int n=q.size();
    for(int i=0;i<n;i++)
    { TreeNode* t=q.front();
    q.pop();
    if(i==0) ans.push_back(t->val);
        if(t->right) q.push(t->right);
        if(t->left) q.push(t->left);
    }
    }
    return ans;
    
}
