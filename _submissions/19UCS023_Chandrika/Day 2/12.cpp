void inorder(TreeNode* A,vector<int>&vect)
 {
     if(A==NULL)
     return;
     inorder(A->left,vect);
     vect.push_back(A->val);
     inorder(A->right,vect);
 }
int Solution::kthsmallest(TreeNode* A, int B) {
  vector<int>vect;
  inorder(A,vect);
  int B_smallest=0;
  for(int i=0;i<vect.size();i++)
  {
      if(B==0)
      break;
      B_smallest=vect[i];
      B--;
  }
return B_smallest;
}
