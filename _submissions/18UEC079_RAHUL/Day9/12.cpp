/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int bal(TreeNode* root)
{
     if(root==NULL)
            return 0;
        int lh=bal(root->left);
       
        int rh=bal(root->right);
       if(lh==-1||rh==-1||abs(lh-rh)>1)
           return -1;
   
            return max(lh,rh)+1;
}
int Solution::isBalanced(TreeNode* root) {
   if(root==NULL)
            return true;
        return bal(root)!=-1;
}
