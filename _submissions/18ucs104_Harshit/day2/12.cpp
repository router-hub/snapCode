/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void helper(TreeNode* A,vector<int> &store){
     
     if(A==NULL)
     return;
     
     helper(A->left,store);
     store.push_back(A->val);
     helper(A->right,store);
     
 }
 
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int>store;
    
    helper(A,store);
    
    return store[B-1];
}
