int Solution::solve(string A, string B) {
    int n=A.length();
    int m=B.length();
     int arr[n+1][m+1];
    int flag=0;
    for(int i=0;i<n+1;i++)
    {
        arr[i][0]=0;
    }
    for(int i=0;i<m+1;i++)
    {
        arr[0][i]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(A[i-1]==B[j-1])
            {
                arr[i][j]=1+arr[i-1][j-1];
            }
            else
            {
                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
            }
        }
    }
    return arr[n][m];
    
}
