vector<int> Solution::prevSmaller(vector<int> &A) {
   
    int n=A.size();
     vector<int>v(n,-1);
   // v[0]=-1;
    stack<int>s;
    s.push(A[0]);
    
    for(int i=1;i<n;i++){
        if(A[i]>=s.top())
       { v[i]=s.top();
        s.push(A[i]);}
        else
       {
           while(!s.empty() && s.top()>A[i])
           {
               s.pop();
           }
           if(!s.empty())
           v[i]=s.top();
           
            s.push(A[i]);
       }
    }
    return v;
}
