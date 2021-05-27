int Solution::solve(vector<int> &A, int B) {
    int i=0,j=0;int c=-1;
    int ans=0;
    sort(A.begin(),A.end());
    while(j<A.size()&&i<A.size())
    {
        if(A[j]-A[i]==B && i!=j)
        {
            ans=1;
            return 1;
        }
        else
        if(A[j]-A[i]>B)
        {
            i++;
    
        }
        else
        {
            j++;
        }
    }
    return ans;
}
