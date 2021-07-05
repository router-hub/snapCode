int Solution::majorityElement(const vector<int> &A) {
    map<int,int>m;
    int n=A.size();
    int x=floor(n/2);
 for(int i=0;i<A.size();i++)
  { m[A[i]]++;
    //   cout<<m[A[i]]<<endl;
      if(x<m[A[i]])
      return A[i];
  }
    
    return 0;
}
