int Solution::cntBits(vector<int> &A) {
    int c1=0,n=A.size(),ans=0;
    for(int i=0;i<32;i++)
    {   c1=0;
        for(int j=0;j<n;j++)
        if(1<<i & A[j])
        c1++;
        
        ans+=(2*c1*(n-c1))%1000000007;
    }
    return ans%1000000007;
}
