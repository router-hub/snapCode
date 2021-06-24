int Solution::majorityElement(const vector<int> &A) {
    int n=A.size(),size=n/2,ans;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        if(m.find(A[i])!=m.end())
        m[A[i]]++;
        else
        m[A[i]]=1;
        
        if(m[A[i]]>=size)
        {
            ans=A[i];
            break;
        }
    }
    return ans;
}
