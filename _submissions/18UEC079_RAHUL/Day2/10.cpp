vector<int> Solution::lszero(vector<int> &A) {
    int n=A.size(),ini=0,fin=0;
    vector<int>pre(n);
    map<int,int>m;
    pre[0]=A[0];
    m[A[0]]=0;
    m[0]=-1;
    for(int i=1;i<n;i++)
    {
         pre[i]=pre[i-1]+A[i];
         if(m.find(pre[i])!=m.end())
         {
             if(i-m[pre[i]]>fin-ini)
            { ini=m[pre[i]];
             fin=i;}
         }
         else
         m[pre[i]]=i;
    }
   vector<int>ans;
   for(int i=ini+1;i<=fin;i++)
   ans.push_back(A[i]);
   
   if(ans.empty() && A[0]==0)
   ans.push_back(A[0]);
   
   return ans;
    
    
}
