 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int> >ans;
    vector<int>v;
    
    if(A==NULL)
    return ans;
    queue<TreeNode*>q;
    q.push(A);
    q.push(NULL);
    
    while(q.size()>1)
    {
        TreeNode* temp=q.front();
        q.pop();
        if(temp!=NULL)
        v.push_back(temp->val);
        else
        {
            ans.push_back(v);
            v.clear();
            q.push(NULL);
            continue;
        }
        if(temp->left!=NULL)
        q.push(temp->left);
         if(temp->right!=NULL)
        q.push(temp->right);
    }
    return ans;
}
