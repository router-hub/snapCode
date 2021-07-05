/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode*A)
{ if(A==NULL)
  return -1;
 
    return 1+max(height(A->left),height(A->right));
}
 
int Solution::isBalanced(TreeNode* A) {
    // isBalanced(A)
    // int x=solve(A);
    if(A==NULL)
     return 1;
    
    if(isBalanced(A->left)&& isBalanced(A->right))
    {if(abs(height(A->left)-height(A->right))<=1)
     return 1;
      else
     return 0;
        
    }
    return 0;
}

