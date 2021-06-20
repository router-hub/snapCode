/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* traverse(TreeNode* A, TreeNode* B){
  
    if(A!=NULL && B!=NULL){
        A->val=A->val+B->val;

        TreeNode* b=traverse(A->left,B->left);
        A->left=b;
        TreeNode* k=traverse(A->right,B->right);
        A->right=k;
    }

    if(A==NULL && B!=NULL){
        return B;
    }
    return A;
} 
 
 
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    
    traverse(A,B);

    return A;
    
}