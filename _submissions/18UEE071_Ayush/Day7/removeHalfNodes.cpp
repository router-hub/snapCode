/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* root) 
{
    if(!root) return NULL;
    
    if(!root->left and !root->right)
        return root;
    

    root->left = solve(root->left);
    root->right = solve(root->right);

    if(!root->left or !root->right)
    {
        if(!root->left)
            return root->right;
        if(!root->right)
            return root->left;
    }
    return root;
}
