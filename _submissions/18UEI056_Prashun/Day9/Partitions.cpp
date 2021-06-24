int Solution::solve(int A, vector<int> &B) {
     int s[100005];
  s[0] = 0;
  A=B.size();
  for (int i = 0; i < B.size(); i++) 
   {
    s[i + 1] = s[i] + B[i];                           // Make a prefix array for getting sum in O(1)
   }
  long long int ans = 0;
  if(s[A] % 3 == 0)                                   // It is possible to make 3 partition only if array sum is multiple of 3
   {
     long long int u = s[A] / 3, v = 2 * s[A] / 3;     
     long long int cnt = 0;                            // Count for first partition
     for (int i = 1; i < A; i++) 
      {
       if (s[i] == v)
        {
         ans += cnt;                                   // If sum is of 2 partitions then add the count to answer
        }
        
       if (s[i] == u)
        {
         cnt++;                                        // If sum is of 1 partition then increase the count by 1
        }
      }
   }
  return ans;

}
