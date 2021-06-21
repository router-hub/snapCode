 bool pathExists(TreeNode* A,int B,vector<int>& ans)
 {
     if(A==NULL)
     return false;
     if(A->val==B)
     return true;
     if(A->left)
     {
         ans.push_back(A->left->val);
         if(pathExists(A->left,B,ans))
         return true;
         ans.pop_back();
     }
     if(A->right)
     {
         ans.push_back(A->right->val);
         if(pathExists(A->right,B,ans))
         return true;
         ans.pop_back();
     }
     return false;
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
    ans.push_back(A->val);
    pathExists(A,B,ans);
    return ans;
}
