int Solution::solve(string A) {
    stack<char>st;
    int n=A.size();
    char x;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
        {
            st.push(A[i]);
            continue;
        }
        if(st.empty())
        return 0;
        x=st.top();
        st.pop();
        if(A[i]==')')
        {
        if(x!='(')
        return 0;
        }
    }
    return st.empty();
}
