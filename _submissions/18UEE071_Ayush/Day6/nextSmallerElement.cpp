vector<int> Solution::prevSmaller(vector<int> &A)
{
    vector<int> out(A.size(),0);
    stack<int> stack;
    
    for(int i=0;i<A.size();++i)
    {
        while(!stack.empty() && stack.top()>=A[i])
        stack.pop();
        
        if(stack.empty())
        out[i]=-1;
        
        else
        out[i] =stack.top();
        
        stack.push(A[i]);
        
    }
    return out;
}
