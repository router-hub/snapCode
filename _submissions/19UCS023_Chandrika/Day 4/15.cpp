/*vector<int> Solution::levelOrder(TreeNode* A) {
 vector<int>res;
    if(A==NULL)
    {
    return res;
    }
    queue<TreeNode*>q;
    q.push(A);
    while(q.empty()==false)
    {
        TreeNode* temp_node=q.front();
         q.pop();
         res.push_back(temp_node->val);
        if(node->left!=NULL)
        q.push(node->left);
        if(node->right!=NULL)
        q.push(node->right);
    }
    return res;
 }*/
/*OR*/
 map<int,vector<int> >mp;
 void levelorderTraverse(TreeNode* A,int x)
 {
    
     if(A==NULL)
     {
         return;
     }
     mp[x].push_back(A->val);
     levelorderTraverse(A->left,x+1);
     levelorderTraverse(A->right,x+1);
 }
vector<vector<int >> Solution::levelOrder(TreeNode* A) {
    mp.clear();
    vector<vector<int>>ans;
 
    levelorderTraverse(A,0);
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;
    
}
