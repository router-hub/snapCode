vector<int> Solution::twoSum(const vector<int> &A, int B) {
    map<int,int>m;
    
    for(int i=0;i<A.size();i++)
    {
        // if(m.find(A[i]-B)!=m.end())
        // {
        //     return {m[A[i]-B]+1,i+1};
        // }
         if(m.find(-A[i]+B)!=m.end())
        {
            return {m[-A[i]+B]+1,i+1};
        }
        if(m.find(A[i])==m.end())
          m[A[i]]=i;
    }
    return {};
}
