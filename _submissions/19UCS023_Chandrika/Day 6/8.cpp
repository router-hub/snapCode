vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<A.size();i++)
    {
       while(!st.empty() && A[i]<=st.top())
       st.pop();
       if(st.empty())
       ans.push_back(-1);
       else
       ans.push_back(st.top());
       st.push(A[i]);
    }
    return ans;
}
