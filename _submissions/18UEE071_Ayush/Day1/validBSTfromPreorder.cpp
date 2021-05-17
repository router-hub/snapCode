int Solution::solve(vector<int> &arr) 
{
    stack<int> s;
    
    int root = INT_MIN;
    
    for(auto x: arr)
    {
        if(x < root)
            return 0;
        
        while(!s.empty() and s.top()<x)
        {
            root = s.top();
            s.pop();
        }
        s.push(x);
    }
    return 1;
}
