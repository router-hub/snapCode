/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
  
//   TreeNode* prev=NULL;
//   TreeNode* first=NULL;
//   TreeNode* second=NULL;

    void fix(TreeNode* &A,TreeNode* &prev,TreeNode* &first,TreeNode* &second)
    {
            if(A==NULL)
            return;
        fix(A->left,prev,first,second);
        if(prev!=NULL && A->val<prev->val)
        {
            if(first==NULL)
                first=prev;
            
            second=A;
            
        }
        prev=A;
       fix(A->right,prev,first,second);
    }
vector<int> Solution::recoverTree(TreeNode* A) {
   // vector<int>ans;
    TreeNode *prev=NULL,*first=NULL,*second=NULL;
     fix(A,prev,first,second);
       return {second->val,first->val};
}
