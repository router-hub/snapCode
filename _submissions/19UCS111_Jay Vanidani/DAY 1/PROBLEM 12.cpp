/*
DAY-1:
PROBLEM 12:VALID BST FROM PREORDER
LINK:https://www.interviewbit.com/problems/valid-bst-from-preorder/
*/
int Solution::solve(vector<int> &A) 
{
    int root=INT_MIN;
    stack<int> stk;
    for(int i=0;i<A.size();i++)
    {
        while(!stk.empty()&&A[i]>stk.top())
        {
            root=stk.top();
            stk.pop();
        }
        if(A[i]<root)
        {
            return 0;
        }
        stk.push(A[i]);
    }
    return 1;
}
