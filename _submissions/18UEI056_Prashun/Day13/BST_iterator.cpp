/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
priority_queue<int,vector<int>,greater<int>>pq;
BSTIterator::BSTIterator(TreeNode *root) {
if(root==NULL) return;
queue<TreeNode*>q;
q.push(root);
while(!q.empty())
{ TreeNode*t=q.front();
q.pop();
pq.push(t->val);
if(t->left)
 q.push(t->left);
if(t->right)
q.push(t->right);
}
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
 if(pq.size()>0)
 return true;
 return false;
}

/** @return the next smallest number */
int BSTIterator::next() {
int x=0;
if(pq.size()>0)    
{x=pq.top();
pq.pop();}
return x;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
