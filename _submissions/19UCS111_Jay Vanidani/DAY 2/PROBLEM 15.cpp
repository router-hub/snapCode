/*
DAY-2:
PROBLEM 15:SNAKE LADDER PROBLEM
LINK:https://www.interviewbit.com/problems/snake-ladder-problem/
*/
int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) 
{
    int n=100;
    int move[101];
    memset(move,-1,sizeof move);
    for(int i=0;i<A.size();i++)
    {
        move[A[i][0]]=A[i][1];
    }
    for(int i=0;i<B.size();i++)
    {
        move[B[i][0]]=B[i][1];
    }
    bool visited[101];
    memset(visited,false,sizeof visited);
    queue<pair<int,int>> q;
    q.push({1,0});
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int v=p.first,d=p.second;
        if(v==n) 
            return d;
        
        for(int j=v+1;j<=v+6 and j<=n;j++)
        {
            
            if(visited[j]==false)
            {
            
                int dist=d+1,a;
                if(move[j]!=-1) 
                    a=move[j];
                else 
                    a=j;
            
                q.push({a,dist});
                visited[j]=true;
            }
        }
    }
    return -1;
}

