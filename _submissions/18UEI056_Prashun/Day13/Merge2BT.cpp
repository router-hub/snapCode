/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void Add_fun(TreeNode*A,TreeNode*B)
{ if(A->left && B->left)
   { Add_fun(A->left,B->left);}
    A->val=A->val+B->val;
 if(B->left && !A->left)    
    { TreeNode* t=B->left;
        A->left=t;
    }
    if(A->right && B->right)
    { Add_fun(A->right,B->right);}
    
    if(B->right && !A->right)
     { TreeNode* t=B->right;
        A->right=t;
     }
}
 
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    if(A==NULL)
    return B;
    if(B==NULL)
    return A;
    Add_fun(A,B);
    return A;
}
