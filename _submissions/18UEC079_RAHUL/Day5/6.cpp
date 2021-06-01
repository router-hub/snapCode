int Solution::findMinXor(vector<int> &A) {
    
    sort(A.begin(),A.end());
    long long int ans=INT_MAX;
    for(int i=1;i<A.size();i++)
    {
        long long x=A[i]^A[i-1];
        ans=min(ans,x);
    }
    return ans;
}
