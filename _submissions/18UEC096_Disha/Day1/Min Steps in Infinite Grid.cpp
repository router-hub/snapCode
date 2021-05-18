//The simple solution to this problem would be finding shortest point b/w every pair of points using bfs, but we can reduce finding shortest path to O(1) time complexity as
//we don't have to iterate through all the options, we are given a specific order and we use the concept of manhattan distance. Always , the shortest path would be on its
//diagonal so we traverse the diagonal untill dx and dy are equal i.e. difference b/w x2-x1 and y2-y1 and then we go vertically or horizontally depending upon whether 
//|x2-x1|>|y2-y1| or|x2-x1|<|y2-y1|.And, this can be calculated by going diagonally untill common so min(dx,dy) + |dx-dy| if(dy>dx), it becomes dy & if(dy<dx), it becomes dx.
//So, we add max(dx,dy) on every i.

// int is_Safe(int x_cor, int y_cor, int end_x,int end_y)
// {
//     return x_cor>=0&&y_cor>=0&&x_cor<end_x&&y_cor<end_y;
// }
int bfs(int x1, int y1, int x2, int y2)
{

    int ans = -1;
    queue<pair<int,int>> q;
    set<pair<int,int>> hashset;

    q.push({x1,y1});

    vector<int> dx = {-1,-1,0,1,1,1,0,-1};
    vector<int> dy = {0,1,1,1,0,-1,-1,-1};

    while(!q.empty())
    {
        int qSize = q.size();
        ans++;
        for(int i=0;i<qSize;i++)
        {
            auto curr = q.front();
            q.pop();

            if(curr.first == x2 and curr.second == y2)
            {
                return ans;
                break;
            }

            hashset.insert(curr);

            for(int delta = 0;delta<8;delta++)
            {
                int newX = curr.first + dx[delta];
                int newY = curr.second + dy[delta];

                if(hashset.find({newX, newY}) == hashset.end())
                {
                    q.push({newX, newY});
                    hashset.insert({newX, newY});
                }

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


