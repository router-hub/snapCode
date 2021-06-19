/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*void helper(vector<int>&ans,TreeNode*A)
{ if(A==NULL)
    return;
    helper(ans,A->left);
    ans.push_back(A->val);
    helper(ans,A->right);
}
 
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> res;
    stack<TreeNode* > st;
    TreeNode* root=A;
    while(true)
    {
        if(root==NULL)
        {
            if(st.empty())
            break;
            root=st.top();
            st.pop();
            res.push_back(root->val);
            root=root->right;
        }
        else
        { st.push(root);
            root=root->left;
        }
    }
    return res;}
