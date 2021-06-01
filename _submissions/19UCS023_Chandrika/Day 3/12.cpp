int findB(TreeNode* A,int B,unordered_set<int>&s)
{
    if(A==NULL)
    return 0;
    if(s.find(B-A->val)!=s.end())
    return 1;
    s.insert(A->val);
    return findB(A->left,B,s)||findB(A->right,B,s);
}
int Solution::t2Sum(TreeNode* A, int B)
{
 return findB(A,B,unordered_set<int>()={});  
}
