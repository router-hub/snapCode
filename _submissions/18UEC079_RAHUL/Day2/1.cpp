int Solution::maxSubArray(const vector<int> &A) {
    // kADANE ALGO'''
    int men=0,msf=INT_MIN;
    
    for(int i=0;i<A.size();i++)
    {
        men+=A[i];
        if(A[i]>men)
        men=A[i];
        if(men>msf)
        msf=men;
    }
    return msf;
}
