/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void inorderTraversal(TreeNode* &A,vector<int> &allVals){
     
     if(A!=NULL){
         inorderTraversal(A->left,allVals);
         allVals.push_back(A->val);
         inorderTraversal(A->right,allVals);
     }
     
     
 }
 
vector<int> Solution::recoverTree(TreeNode* A) {
    
    vector<int> allVals;
    vector<int> sorted;
    vector<int> ans;
    
    inorderTraversal(A,allVals);
    
    for(int i=0;i<allVals.size();i++){
        sorted.push_back(allVals[i]);
    }
    sort(sorted.begin(),sorted.end());
    
    for(int i=0;i<allVals.size();i++){
        if(allVals[i]!=sorted[i]){
            ans.push_back(sorted[i]);
        }
    }
    
    return ans;
}
