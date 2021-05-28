//This is done using normal bfs just one condition is added  i.e. the cells that are inside a circle is restricted.The points that are restricted can be checked by the condition
//(x-x1)^2+(y-y1)^2<=r^2 where x and y are co-ordinates of point and  x1 and y1 are centres of all circles given.
bool insideCircle(int x,int y,int C,vector<int>E,vector<int>F, int D)
{
    for(int i=0;i<C;i++)
    {
        if(pow(x-E[i],2)+pow(y-F[i],2)<=pow(D,2))
            return true;    
    }
    return false;
    
}

string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    
    set<pair<int,int>>s;
    queue<pair<int,int>>q;
    // if(insideCircle(0,0,C,E,F,D))
    //     return "NO";
    q.push({0,0});
    vector<int>dir1={0,0,1,-1,1,1,-1,-1};
    vector<int>dir2={1,-1,0,0,1,-1,1,-1};
    while(!q.empty())
    {
        pair<int,int>tp=q.front();
        q.pop();
        // cout<<tp.first<<" "<<tp.second<<endl;
        if(tp.first==A&&tp.second==B)
            return "YES";
        for(int i=0;i<8;i++)
        {
            int new_row=tp.first+dir1[i];
            int new_col=tp.second+dir2[i];
            if(new_row<0||new_row>A||new_col<0||new_col>B||s.count({new_row,new_col})||
            insideCircle(new_row,new_col,C,E,F,D))
            {
                // cout<<"invalid"<<new_row<<" "<<new_col<<endl;
                continue;
            }
            // cout<<new_row<<" "<<new_col<<endl;    
            q.push({new_row,new_col});
            s.insert({new_row,new_col});
        }
    }
    return "NO";
    
}
