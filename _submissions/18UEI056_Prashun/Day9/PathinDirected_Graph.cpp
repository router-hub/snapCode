int dfs(vector<vector<int>>&adj,vector<bool>&visited,int start,int dest)
{ visited[start]=true;
  if(start==dest) return 1;
  for(int x=0;x<adj[start].size();x++)
  { if(!visited[adj[start][x]])
   { if(dfs(adj,visited,adj[start][x],dest)) 
   return 1;
   }   
  }
  return 0;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>>adj(A+1);
    for(int i=0;i<B.size();i++)
    adj[B[i][0]].push_back(B[i][1]); //Adjaencey matrix
    vector<bool>visited(A+1,false);
    return dfs(adj,visited,1,A);
}
