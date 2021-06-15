vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
//     int n=A.size(),max_num=INT_MIN;
//     vector<int>ans;
//   multiset<int> pq;
//     B=min(B,n);
//     if(B==1)
//     return A;
//     for(int i=0;i<B;i++)
//     {
//       // max_num=max(max_num,A[i]);
//         pq.insert(A[i]);
//     }
//     auto it=*pq.rbegin();
//     ans.push_back(it);
//      for(int i=B;i<n;i++)
//      {
//           pq.insert(A[i]);
//          pq.erase(A[i-B]);
//          // if(A[i-B]==A[i-B+1])
//             pq.insert(A[i-B+1]);
          
//           auto it=*pq.rbegin();
//           ans.push_back(it);
//      }
//      return ans;
// Not running for some cases don't know why.
     
     
     
      int max=INT_MIN,i,j;
    vector<int>c;
    stack<int>s;
    for( i=0;i<B;i++)
    {
        if(max<A[i])
        max=A[i];
    }
    s.push(max);
    c.push_back(max);
    for(int j=B;j<A.size();j++)
    {    
        if(s.top()!=A[j-B])
        {
            if(s.top()>A[j])
            {
                c.push_back(s.top());
            }
            else
            {
                c.push_back(A[j]);
                s.push(A[j]);
            }
        }
        else
        {
            int m=INT_MIN;
            for(i=j-B+1;i<=j;i++)
            {
                if(m<A[i])
                m=A[i];
            }
             c.push_back(m);
                s.push(m);
        }
    }
    return c;
     
}
