bool traverse(TreeNode* A,int sum,int val) {
return(A && (
traverse(A->left,sum,val+A->val) ||
traverse(A->right,sum,val+A->val) || (
val+A->val == sum &&
!A->left &&
!A->right
)
));
}

int Solution::hasPathSum(TreeNode* A, int B) {
return traverse(A,B,0) ? 1 : 0;
}
