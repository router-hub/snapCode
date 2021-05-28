/*
DAY-2:
PROBLEM 12:KTH SMALLEST ELEMENT IN TREE
LINK:https://www.interviewbit.com/problems/kth-smallest-element-in-tree/
*/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inOrder(TreeNode* A,vector<int> &st)
 {
     if(A==NULL)
     {
         return;
     }
     inOrder(A->left,st);
     st.push_back(A->val);
     inOrder(A->right,st);
 }
int Solution::kthsmallest(TreeNode* A, int B) 
{
    vector<int> st;
    inOrder(A,st);
    return st[B-1];
}
