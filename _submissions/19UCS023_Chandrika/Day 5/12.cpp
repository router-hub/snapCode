void inorder(TreeNode*root,vector<int>&vect)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,vect);
    vect.push_back(root->val);
    inorder(root->right,vect);
}
vector<int> Solution::recoverTree(TreeNode* A) {
    vector<int>v;
    vector<int>temp;/*To store the inorder traversal of givrn BST*/
    vector<int>ans;/*To store all the node values of the BST in sorted order*/
    inorder(A,v);
    for(int i=0;i<v.size();i++)
    {
       temp.push_back(v[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]!=v[i])/*Inorder traversal of BST in an ideal case should be sorted, but if not for some elements, then these are those swapped elements*/
        {
           ans.push_back(temp[i]);
           ans.push_back(v[i]);
           break;
        }
    }
    return ans;
    
}
