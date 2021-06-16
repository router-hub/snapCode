int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int m=A.size();//row size
    if(m==0)
    {
    return 0;
    }
    int n=A[0].size();//col size
    int i=0,j=n-1;
    int ans=0;
while(i>=0 && i<m && j>=0 && j<n)
{
    if(B>A[i][j])
    i++;
    else if(B<A[i][j])
    j--;
    else if(B==A[i][j])
    {
        ans=1;
        break;
    }
}
return ans;
}
