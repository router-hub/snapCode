int Solution::mice(vector<int> &A, vector<int> &B) {
    
     sort(A.begin(),A.end());
     sort(B.begin(),B.end());
     long long int diff,ans=0;
     for(int i=0;i<A.size();i++)
      {
          diff=abs(A[i]-B[i]);
          if(diff>ans)
          ans=diff;
      }
    return ans;
}
