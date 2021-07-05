/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void recur(TreeNode*A,int B,vector<int>&ans,vector<int>&v)
{  if(!A) return;
     v.push_back(A->val);
 
   if(A->val==B)
   { ans=v;
    return;
   }
// if(A->left)
  recur(A->left,B,ans,v);
//  
//  if(A->right)
  recur(A->right,B,ans,v);
  v.pop_back();
}
vector<int> Solution::solve(TreeNode* A, int B) {
   if(A==NULL)
    return {};
    vector<int>ans;
    vector<int>v;
    recur(A,B,ans,v);
    return ans;
    
}
