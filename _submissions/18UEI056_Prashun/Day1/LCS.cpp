//code
int Solution::solve(string A, string B) {
    int m=(int)A.size();
    int n=(int)B.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    { dp[0][i]=0;
    }
     for(int i=0;i<=n;i++)
    { dp[i][0]=0;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
      { if(A[i-1]==B[j-1])
        dp[i][j]=dp[i-1][j-1]+1;
        else
       dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
      }
    }
    return dp[m][n];
}
