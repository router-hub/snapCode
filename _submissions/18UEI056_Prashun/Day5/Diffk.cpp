int Solution::diffPossible(vector<int> &A, int B) {
    if(B>A[A.size()-1]) return 0;
    int i=0,j=1;
    while(i<A.size() && j<A.size())
    {if(A[j]-A[i]==B &&i!=j)
      return 1;
 if(A[j]-A[i]<B)
 j++;
 else
 i++;
    }
   return 0; 
}
