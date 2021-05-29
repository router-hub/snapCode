int Solution::hammingDistance(const vector<int> &A) {
   long long int sum=0;
   long long int count;
   long long int n=A.size();
   for(int i=0;i<32;i++)
   {
       count=0;
       for(int j=0;j<n;j++)
       {
           if(A[j]&(1<<i))
           count++;
       }
   
   sum=(sum+count*(n-count)*2)%1000000007;
   }
   return sum;
    
}
