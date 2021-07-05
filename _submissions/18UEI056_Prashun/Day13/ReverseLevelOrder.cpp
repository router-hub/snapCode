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
   if(A==NULL)
    return {};
   
    vector<int>v;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    { TreeNode* t=q.front();
    q.pop();
     v.push_back(t->val);
     if(t->right)
     q.push(t->right);
     if(t->left)
     q.push(t->left);
        
    }
    reverse(v.begin(),v.end());
    return v;
}
