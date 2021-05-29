int Solution::hammingDistance(const vector<int> &A) {
    long long int sum = 0;
    long long int n=A.size();
    for (int i = 0; i < 32; i++)
    {
      long long int zero_count = 0, one_count = 0;
      for (int j=0;j<n;j++)
      {
        if (A[j] & (1 << i))
          one_count++;
        else
          zero_count++;
      }
      sum=(sum+(one_count*zero_count)*2)%1000000007;
    } 
    return sum;
  }
