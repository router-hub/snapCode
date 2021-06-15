int Solution::numDistinct(string A, string B) {
    int n=A.length();
    int m=B.length();
    int dp[n+1][m+1];
   dp[0][0]=1;
   for(int i=1;i<n+1;i++)
   {
       dp[i][0]=1;
   }
   for(int j=1;j<m+1;j++)
   {
       dp[0][j]=0;
   }
   for(int i=1;i<n+1;i++)
   {
       for(int j=1;j<m+1;j++)
       {
           if(A[i-1]==B[j-1])
           {
               dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
           }
           else
           {
               dp[i][j]=dp[i-1][j];
           }
       }
   }
   return dp[n][m];
}
