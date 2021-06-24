/*
Given a binary search tree, write a function to find the kth smallest element in the tree.
*/
//code
void inorder(TreeNode*x,int B,int &nodeno,int&ans)
 { if(x==NULL) return ;
 
 inorder(x->left,B,nodeno,ans);
    if(nodeno==B-1)
    { nodeno++;
        ans=(x->val);
        return;
    }
     nodeno++;
 inorder(x->right,B,nodeno,ans);
     
 }
 
int Solution::kthsmallest(TreeNode* A, int B) {
    //vector<int>v;
    int nodeno=0,ans=0;
    if(A==NULL ) return 0;
    inorder(A,B,nodeno,ans);
   return ans;
   // sort(v.begin(),v.end());
    //for(int i=0;i<v.size();i++)
    //{ if(i==B-1)
    //    return v[i];
    //}
    
}
