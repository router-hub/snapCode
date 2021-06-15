vector<int> Solution::dNums(vector<int> &A, int B) {
    int n=A.size();
    vector<int>ans;
    map<int,int>m;
    if(B>n)
    return {};
    if(B==1)
    {
         vector<int>ans1(n,1);
         return ans1;
    }
    for(int i=0;i<B;i++)
    {
        if(m.find(A[i])!=m.end())
        m[A[i]]++;
        else
        m[A[i]]=1;
    }
     ans.push_back(m.size());
    for(int i=B;i<n;i++)
    {
        if(m.find(A[i])!=m.end())
         m[A[i]]++;
         else
         m[A[i]]=1;
         
         m[A[B-i]]--;
         if(m[A[B-i]]==0)
          m.erase(A[B-i]);
         
         ans.push_back(m.size());
    }
    return ans;
}
