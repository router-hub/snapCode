/*
DAY-1:
PROBLEM 11:WAYS TO FORM MAX HEAP
LINK:https://www.interviewbit.com/problems/ways-to-form-max-heap/
*/
#define MOD 10000000007
vector<vector<long long>> calComb(int n,int k)
{
    vector<vector<long long>> result(n+1,vector<long long>(k+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,k);j++)
        {
            if(j==0||j==i)
            {
                result[i][j]=1;
            }
            else
            {
                result[i][j]=(result[i-1][j-1]%MOD+result[i-1][j]%MOD)%MOD;
            }
        }
    }
    return result;
}
int leftSubTree(int totalEle)
{
    if(totalEle==1)
    {
        return 0;
    }
    int heightOfTree=log2(totalEle);
    int maxEle=(1<<heightOfTree);
    int lastEle=totalEle-((1<<heightOfTree)-1);
    if(lastEle>=(maxEle/2))
    {
        return (1<<heightOfTree)-1;
    }
    return (1<<heightOfTree)-1-(maxEle/2)+lastEle;
}
int Solution::solve(int A) 
{
    vector<vector<long long>> ncr=calComb(A,A);
    vector<long long> dp(A+1);
    dp[0]=dp[1]=1;
    for(int i=2;i<=A;i++)
    {
        int left=leftSubTree(i);
        dp[i]=((ncr[i-1][left]*dp[left])%MOD*dp[i-1-left])%MOD;
    }
    return dp[A];
}
