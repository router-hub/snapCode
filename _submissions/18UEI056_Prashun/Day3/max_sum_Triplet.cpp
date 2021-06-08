int lowvalue(set<int>&s,int&x)
{ auto i=s.lower_bound(x);
--i;
    return *i;
}

int Solution::solve(vector<int> &A) {
 int maxisuff[A.size()+1];
 maxisuff[A.size()]=0;
 int ans=0;
 for(int i=A.size()-1;i>=0;i--)
 { maxisuff[i]=max(maxisuff[i+1],A[i]);
 }
 set<int>s;
 s.insert(INT_MIN);
 for(int i=0;i<A.size();i++)
 { if(maxisuff[i+1]>A[i])
     {ans=max(ans,lowvalue(s,A[i])+A[i]+maxisuff[i]);
     s.insert(A[i]);
 }}
    return ans;
    
    
}
