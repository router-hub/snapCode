vector<int> Solution::solve(vector<int> &A) {
    // unordered_map<int,int>m;
    // for(int i=0;i<A.size();i++)
    // { 
    //   m[A[i]]++;  
    // }
    // for(int i=0;i<A.size();i++)
    // { if(m.size()==0)
    //  return A;
    //     if(m.find(A[i])!=m.end())
    // {  int x=A[i];
    //     A[i]=A[i]+m[x]-1;
    //     // m[x]=0; 
    //     m.erase(x);
    //     // continue;
    // }
    // }
    // return A;
      map<int,int> fq;
    for(int i=0;i<A.size();i++)
    {
        if(fq.count(A[i]))
        {
            int ind=fq[A[i]];
            A[ind]++;
            if(fq.count(A[ind]))
            fq[A[ind]]=min(ind,fq[A[ind]]);
            else
            fq[A[ind]]=ind;
        }
        fq[A[i]]=i;
    }
    return A;
}
