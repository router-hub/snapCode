/*
Given a binary search tree T, where each node contains a positive integer, and an integer K, you have to find whether or not there exist two different nodes A and B such that A.value + B.value = K.

Return 1 to denote that two such nodes exist. Return 0, otherwise.

*/

//code
int Solution::t2Sum(TreeNode* A, int B) {
    unordered_map<int,int>mp;
    queue<TreeNode*>q;
    q.push(A);
    while(!q.empty())
    { TreeNode* p=q.front();
    q.pop();
    int x=B-(p->val);
    if(x>=0)
        { if(mp.find(x)!=mp.end())
            return 1;
        }
         mp[p->val]++;
    if(p->left!=NULL)
    q.push(p->left);
    if(p->right!=NULL)
q.push(p->right);
    }
   return 0;
}
