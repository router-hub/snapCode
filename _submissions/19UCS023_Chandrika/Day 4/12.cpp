int s=0;
int i=0;
vector<int>inorderVect;
void inorderBST(TreeNode *root)
{
    if(root==NULL)
    return;
    inorderBST(root->left);
    inorderVect.push_back(root->val);
    inorderBST(root->right);
}
BSTIterator::BSTIterator(TreeNode *root) {
    inorderBST(root);
    s=inorderVect.size();

}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
   if(i<s)
   {
       return true;
   }
   else
   {
       return false;
   }

}

/** @return the next smallest number */
int BSTIterator::next() {
return inorderVect[i++];

}

