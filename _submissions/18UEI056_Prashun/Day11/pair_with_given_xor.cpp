int Solution::solve(vector<int> &A, int B) {
// vector<vector<int>>v;
unordered_map<int,int>m;
int count=0;
for(int i=0;i<A.size();i++)
{// { for(int j=i+1;j<A.size();j++)
    // { int xr= A[i]^A[j];
    //     if(xr==B)
    //     v.push_back({A[i],A[j]});
    // }
    if(m.find(B^A[i])!=m.end())
    count++;
    m.insert({A[i],i});
   
}
    return count;
}
