/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//  void inorder(TreeNode* &A, int &B,vector<int>&ans){
//      if(A==NULL)
//      return;
//      if(A->val==B)
//      {ans.push_back(B);
//      return;}
     
//      ans.push_back(A->val);
//      inorder(A->left,B,ans);
//      ans.pop_back();
//      inorder(A->right,B,ans);
//      ans.pop_back();
//  }
 
vector<int> res;

void findPath(TreeNode *A,int target,vector<int> temp){
    if(!A){
        return;
    }
    
    temp.push_back(A->val);
    
    if(A->val==target){
        res=temp;
        return;
    }
    
    findPath(A->left,target,temp);
    findPath(A->right,target,temp);
}
vector<int> Solution::solve(TreeNode* A, int B) {
    // vector<int>ans;
    // inorder(A,B,ans);
    // return ans;
     findPath(A,B,{});
    return res;
}






