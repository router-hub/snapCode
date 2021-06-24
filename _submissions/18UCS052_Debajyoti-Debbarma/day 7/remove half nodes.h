/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 TreeNode* traverse(TreeNode *A){
     
     if(A->left==NULL && A->right!=NULL){
         
       TreeNode*c=traverse(A->right);
       return c;
         
     }
     if(A->left!=NULL && A->right==NULL){
         
         
         TreeNode*c=traverse(A->left);
         return c;
         
     }
     if(A->left==NULL&&A->right==NULL){
         return A;
     }
     
     if(A->left!=NULL && A->right!=NULL){
         TreeNode* a=traverse(A->left);
         if(a)
         A->left=a;
         
         
         TreeNode* b=traverse(A->right);
         if(b)
         A->right=b;
     }
     
     return A;
 }
 
 
TreeNode* Solution::solve(TreeNode* A) {
    
    TreeNode* head=A;
    
    head=traverse(A);
    
    return head;
    
}
