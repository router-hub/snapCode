void bfs(vector<vector<int>>&A,int &count,int x,int y)
{//  visited[x][y]=true;
    if(x>=A.size() || y>=A[0].size() ||x<0||y<0||A[x][y]==0)
     return;
// if(A[x][y]==1) 
count++;
A[x][y]=0;
bfs(A,count,x+1,y);
bfs(A,count,x-1,y);
bfs(A,count,x+1,y+1);
bfs(A,count,x,y+1);
bfs(A,count,x,y-1);
bfs(A,count,x+1,y-1);
bfs(A,count,x-1,y-1);
bfs(A,count,x-1,y+1);
// return count;
}


int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int largest=INT_MIN,count=0;
    // vector<vector<bool>>visited;
    // for(int i=0;i<n;i++)
    //  { for(int j=0;j<m;j++)
    //      visited[i][j]=false;
    //  }
     for(int i=0;i<n;i++)
     { for(int j=0;j<m;j++)
     {if(A[i][j]==1)
        count=0;
        bfs(A,count,i,j);
      largest=max(largest,count);
     }
     }
     return largest;
}
