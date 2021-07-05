/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 int isBST(TreeNode* A,int min,int max){
if(!A) return 1;
if(A->val>max||A->val<min) return 0;
return isBST(A->left,min,A->val-1)&&isBST(A->right,A->val+1,max);
}
int Solution::isValidBST(TreeNode* A) {
return isBST(A,INT_MIN,INT_MAX);
}
