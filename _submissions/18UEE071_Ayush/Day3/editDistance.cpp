int editDis(string A,int i, string B, int j)
{
     if(i==0)
     {
          return j;
     }
     if(j==0)
     {
          return i;
     }
     if(A[i]==B[j])
     {
          return editDis(A,i-1,B,j-1);
     }
     else
     {
          return 1 + min(editDis(A,i,B,j-1) ,min(editDis(A,i-1,B,i-1),editDis(A,i-1,B,j)));
     }
     
 
}
 
int Solution::minDistance(string A, string B)
{
    if(A.length()==1 and B.length()==1 and A!=B)
    return 1;
    // if(A.length()==2 and B.length()==2 and A!=B)
    // return 1;
      
     int l1 = A.length();
     int l2 = B.length();
 
     int dp[l1+1][l2+1];
 
     for(int i=0;i<=l2;i++)
     dp[0][i]=i;
 
     for(int i=0;i<=l1;i++)
     dp[i][0]=i;
 
     for(int i=1;i<=l1;i++)
     {
          for(int j=1;j<=l2;j++)
          {
               
 
               if(A[i-1]==B[j-1])
               {
                    dp[i][j]=dp[i-1][j-1];
               }
               else
               {
                    dp[i][j] = 1+ min(dp[i][j-1],min(dp[i-1][j-1], dp[i-1][j]));
               }
               
          }
     }
     return dp[l1][l2];
}