int Solution::anytwo(string A) {
    int dp[A.length()+1][A.length()+1];
    for(int i=0;i<=A.length();i++)
    {
        for(int j=0;j<=A.length();j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else
            {
                if(A[i-1]==A[j-1] && i!=j)//when characters are same, they should not be on same index
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
    if(dp[A.length()][A.length()]>=2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
