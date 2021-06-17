int Solution::titleToNumber(string A) {
    long long int ans=0;
    int fact=1;
   // A[i]-'A'+1 converts the string into its corresponding int
   for(int i=A.size()-1;i>=0;i--)
   {
       ans+=fact*(A[i]-'A'+1);
       fact*=26;
   }
   return ans;
}
