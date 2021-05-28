/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool ispairsum(TreeNode* A, int B,unordered_set<int>&s)
 {
     if(A==NULL)
     return false;
     if(ispairsum(A->left,B,s))
      return true;
      if(s.find(B-A->val)!=s.end())
      {
          return true;
      }
      else
      s.insert(A->val);
      
      return ispairsum(A->right,B,s);
 }
int Solution::t2Sum(TreeNode* A, int B) {
    unordered_set<int>s;
    return ispairsum(A,B,s);
}
