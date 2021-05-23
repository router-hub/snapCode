/*
https://www.interviewbit.com/problems/valid-bst-from-preorder/
*/
int Solution::solve(vector<int> &A) {
    /*preorder:root -> left-> right*/
  int root=INT_MIN;
  stack<int>st;
    /*Find the next greater element after the root , if there is an element smaller than the root after the next greater element, return false*/
  for(int i=0;i<A.size();i++)
  {
      while(!st.empty() && A[i]>st.top())
      {
      root=st.top();
      st.pop();
      }
      if(A[i]<root)
      {
       return 0;
      }
      st.push(A[i]);
  }
return 1;
}
