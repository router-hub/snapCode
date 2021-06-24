/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A!=NULL && A->left==NULL && A->right==NULL)
    return 1;
    if(!A) return INT_MAX;
    return min(minDepth(A->left),minDepth(A->right))+1;
}
