int Solution::diffPossible(const vector<int> &A, int B) {
    
  int n=A.size();
  map<long long int,int>m;
  
   for(int i=0;i<n;i++)
  {
      m[A[i]]=i;
  }
  
  for(int i=0;i<n;i++)
  {
      
      if(m.find((-B+A[i]))!=m.end() && m[-B+A[i]]!=i)
      return 1;
     //cout<<B<<"l"<<A[i]<<endl;
  }
  
  return 0;
}
