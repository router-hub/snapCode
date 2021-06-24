int Solution::cntBits(vector<int> &A) {
    long long int ans=0;
   long long int no_of_diff_bits=0;
    long long int n=A.size();
    long long int mod=1000000007;
    for(long long int i=0;i<31;i++)
    {
        no_of_diff_bits=0;
        for(long long int j=0;j<n;j++)
        {
            if((A[j]&(1<<i))!=0)
            {
                no_of_diff_bits++;
            }
        }
        ans=ans+(2*no_of_diff_bits*(n-no_of_diff_bits));
        ans=ans%mod;
    }
    return ans;
}
