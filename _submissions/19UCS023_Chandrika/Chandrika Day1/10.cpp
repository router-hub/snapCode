/*
https://www.interviewbit.com/problems/colorful-number/
*/
int Solution::colorful(int A) {
    /*Number into vector*/
   vector<int> nums;
   while(A!=0)
   {
       nums.push_back(A%10);
       A/=10;
   }
   reverse(nums.begin(),nums.end());
   int n=nums.size();
   unordered_set<int> s;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
          int prod=1;
          for(int k=i;k<=j;k++)
          {
              prod=prod*nums[k];
          }
          if(s.find(prod)!=s.end())
          return 0;
          s.insert(prod);
       }
       
   }
   return 1;
}
