int Solution::sqrt(int A) {
    if(A==0 || A==1)
    {
        return A;
    }
   int l=1,r=A,res;
   while(l<=r)
   {
       int mid=(l+r)/2;
       if(mid*mid==A)
       {
           return mid;
       }
       if(mid<=A/mid)
       {
           l=mid+1;
           res=mid;
       }
       else
       {
           r=mid-1;
       }
   }
   return res;
}
