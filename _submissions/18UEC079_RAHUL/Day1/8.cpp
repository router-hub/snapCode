int Solution::solve(string A) {
    int n=A.length();
    
    if(n%2!=0)
    return 0;
    
    stack<char>s;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
        s.push(A[i]);
        else
        {
            if(s.empty())
            return 0;
            else
            s.pop();
        }
    }
    return s.empty();
    
}
