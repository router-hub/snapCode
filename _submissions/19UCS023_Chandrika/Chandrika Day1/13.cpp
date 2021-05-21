int Solution::solve(string A, string B) {
    int dp[A.length()+1][B.length()+1];
    for(int i=0;i<=A.length();i++)
    {
        for(int j=0;j<=B.length();j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
            else if(A[i-1]==B[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[A.length()][B.length()];
}
