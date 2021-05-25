int Solution::solve(vector<int> &A, int B) {
    
//     int n=A.size();
//     set<int>s;
//   // B=abs(B);
//     for(int i=0;i<n;i++)
//     {       
//         // if(s.find(A[i]-B)!=s.end()||s.find(-A[i]+B)!=s.end())
//         //   return 1;
//         //  else
//         //   s.insert(A[i]);
//         s.insert(A[i]);
        
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(B!=0 && s.find(A[i]+B)!=s.end())
//         return 1;
//     }
    
//     return 0;
    
    unordered_map<int,int>m;
    for(int i=0;i<A.size();i++)
    {
        m[A[i]]=i;
    }
    for(auto it:A)
    {
        if(m.find(it+B)!=m.end() && m[it+B]!=m[it])
        {
            return 1;
        }
    }
    return 0;
}
