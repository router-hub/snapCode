int Solution::solve(string A) {
    stack <char>s;
    int i=0;
    while( i<A.size())
    {
        if(A[i]=='(')
        {
            s.push(A[i]);
        }
        else if(!s.empty() && s.top()=='(')
        {
            s.pop();
        }
        i++;
    }
    return(s.empty());
}

