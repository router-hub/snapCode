//The simple solution to this problem would be finding shortest point b/w every pair of points using bfs, but we can reduce finding shortest path to O(1) time complexity as
//we don't have to iterate through all the options, we are given a specific order and we use the concept of manhattan distance. Always , the shortest path would be on its
//diagonal so we traverse the diagonal untill dx and dy are equal i.e. difference b/w x2-x1 and y2-y1 and then we go vertically or horizontally depending upon whether 
//|x2-x1|>|y2-y1| or|x2-x1|<|y2-y1|.And, this can be calculated by going diagonally untill common so min(dx,dy) + |dx-dy| if(dy>dx), it becomes dy & if(dy<dx), it becomes dx.
//So, we add max(dx,dy) on every i.

int bfs(int start_x,int start_y,int end_x,int end_y)
{
    set<pair<int,int>>st;
    queue<vector<int>>q;
    q.push({start_x,start_y,0});
    vector<pair<int,int>>directions{{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1}};
    st.insert({start_x,start_y});
    vector<int>tp;
    while(!q.empty())
    {
        tp=q.front();
        //IMP!!! This condition needs to be checked here as if the source is 0,0 & des is 0,0 then it will go inside & unnecesarily check for all the other options and will give
        //wrong answer but instead for shortest path, it should return 0 here only as source & destination are same
        if(tp[0]==end_x&&tp[1]==end_y)
                 return tp[2];
        q.pop();
        for(auto dir:directions)
        {
            int new_x=tp[0]+dir.first;
            int new_y=tp[1]+dir.second;
            if(st.find({new_x,new_y})==st.end())
            {
                st.insert({new_x,new_y});
                q.push({new_x,new_y,tp[2]+1});
            }
        }
    }
    return -1;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    for(int i=0,j=0;i<A.size()-1&&j<B.size()-1;i++,j++)
    {
        ans=ans+bfs(A[i],B[j],A[i+1],B[j+1]);
      //OR
      ans=ans+max(abs(A[i]-A[i+1]),abs(B[i]-B[i+1]));
    }
    return ans;
    
}


