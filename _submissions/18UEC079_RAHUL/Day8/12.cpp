/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 
TreeNode* Solution::solve(TreeNode* t1, TreeNode* t2) {
   if (t1 == NULL)
            return t2;
        if (t2 == NULL)
            return t1;
        t1->val += t2->val;
        t1->left = solve(t1->left, t2->left);
        t1->right = solve(t1->right, t2->right);
        return t1;
    
    
    
    
}
