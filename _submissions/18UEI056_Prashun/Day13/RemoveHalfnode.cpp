/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 
 
TreeNode* Solution::solve(TreeNode* A) {
    if(A==NULL)
 return A;
 
   A->left= solve(A->left);
    A->right=solve(A->right);
    
    if(A->right==NULL && A->left==NULL)
    return A;
    
    if(A->left==NULL)
      {return A->right;}
    if(A->right==NULL)
    {return A->left; }
    
    return A;
}
