/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 vector<int> ans;
void recurse(TreeNode* root, int k, vector<int> &path, bool &flag)
{
    if(root==NULL or flag)   return;
    
    path.push_back(root->val);
    
    if(root->val == k)
    {
        flag= true;
        ans = path;
        return;
    }
    
    if(root->left != NULL)
    {
        recurse(root->left, k, path, flag);
        path.pop_back();
    }
    if(root->right != NULL)
    {
        recurse(root->right, k, path, flag);
        path.pop_back();
    }
}
vector<int> Solution::solve(TreeNode* root, int k) {
    
    vector<int> path;
    ans.clear();
    bool flag = false;
    recurse(root, k, path, flag);
    return ans;
}
