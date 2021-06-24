int Solution::solve(string A) {
    // string B=A;
    // reverse(B.begin(),B.end());
    int n=A.length();
    // int m=n;
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {for(int j=0;j<=n;j++)
        { if(i==0||j==0)
          dp[i][j]=0;
            if(A[i-1]==A[n-j])
            dp[i][j]=1+dp[i-1][j-1];
            else
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][n];
    
    
}
