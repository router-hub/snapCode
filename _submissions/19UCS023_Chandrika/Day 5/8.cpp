int Solution::maxSpecialProduct(vector<int> &A) {
    long long int ans=INT_MIN;
    long long int mod=1000000007;
    stack<int>s;
    for(long long int i=0;i<A.size();i++)
    {
        while(!s.empty() && A[i]>=A[s.top()])
        {
            s.pop();
            if(!s.empty())
            ans=max(ans,s.top()*i);
        }
        s.push(i);
    }
    if(ans<0)
    {
        return 0;
    }
    else
    {
        return ans%mod;
    }
}
