int Solution::findMedian(vector<vector<int> > &A) {
    vector<int>B;
    int x=A.size();
    int y=A[0].size();
    /*matrix to array*/
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            B.push_back(A[i][j]);
        }
    }
    sort(B.begin(),B.end());
    int n=B.size();
    int res=0;
    if(!(n&1))
    {
        res=(B[n/2]+B[(n/2)-1])/2;
    }
    else
    {
        res=B[n/2];
    }
    return res;
}
