/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int>ans;
    stack<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    { TreeNode* temp=q.top();
     ans.push_back(temp->val);
     q.pop();
      if(temp->right!=NULL)
        q.push(temp->right);
          if(temp->left!=NULL)
      q.push(temp->left);
    }
    return ans;
}
