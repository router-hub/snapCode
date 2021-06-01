/*
DAY-2:
PROBLEM 13:LONGEST PALINDROMIC SUBSEQUENCE
LINK:https://www.interviewbit.com/problems/longest-palindromic-subsequence/
*/
int Solution::solve(string A)
{
    string B=A;
    reverse(B.begin(),B.end());
    int n=A.size();
    int m=B.size();
    int ans[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
            {
                ans[i][j]=0;
            }
            else if(A[i-1]==B[j-1])
            {
                ans[i][j]=ans[i-1][j-1]+1;
            }
            else
            {
                ans[i][j]=max(ans[i-1][j],ans[i][j-1]);    
            }
        }
    }
    return ans[n][m];
}
