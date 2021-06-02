/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 
void Inorder(TreeNode* node,vector<int> &values)
{
    if (node == NULL)
        return;
    Inorder(node->left,values);
    values.push_back(node->val);
    Inorder(node->right,values);
}

int Solution::t2Sum(TreeNode* A, int B) {
    
   vector<int> values;
   int sum=0;
   
   Inorder(A,values);
   
   values.erase(unique(values.begin(),values.end()),values.end());
   
   for(int i=0;i<values.size();i++){
       for(int j=i+1;j<values.size();j++){
           sum=values[i]+values[j];
           if(sum==B){
               return 1;
           }
           
       }
   }
    
    return 0;
}
