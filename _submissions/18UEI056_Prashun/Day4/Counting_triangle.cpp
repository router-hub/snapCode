int Solution::nTriang(vector<int> &A) {
    int i=0,j=A.size()-1;
    int count=0,m=1000000007;
   sort(A.begin(),A.end());
   for(int i=A.size()-1;i>=0;i--)
{  int start=0,end=i-1;
    while(start<end)
    { if(A[start]+A[end]>A[i])
                count+=end-start,end--;
  else
   start++;
   count=count%m;
    }
}
return count;
}
