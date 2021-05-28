int dfs(vector<vector<int> > &A,int &m,int &n,int i,int j )
{
    if(i<0||i>=m||j<0||j>=n||A[i][j]==0)
    return 0;
    
    //count++;
    A[i][j]=0;
    
    return 1+dfs(A,m,n,i+1,j)+dfs(A,m,n,i-1,j)+dfs(A,m,n,i,j-1)+dfs(A,m,n,i,j+1)+
         dfs(A,m,n,i+1,j+1)+dfs(A,m,n,i+1,j-1)+dfs(A,m,n,i-1,j+1)+ dfs(A,m,n,i-1,j-1);
   
   
}
int Solution::solve(vector<vector<int> > &A) {
    int m=A.size(),n=A[0].size(),ans=0;
    //int count;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==1)
            {  //count=0;
               
                ans=max(ans,dfs(A,m,n,i,j));
            }
        }
    }
    return ans;
    
}
