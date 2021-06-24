int Solution::maxArr(vector<int> &A) {
    int n=A.size(),ans=0;
    //   TLE
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         ans=max(ans,abs(A[i]-A[j])+j-i);
    //     }
    // }
    // return ans;
    
   // map<int,int>m;
      int sum = INT_MIN, max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
    for (auto i = 0; i < A.size(); ++i)
    {
        max1 = max(max1, A[i] + i);
        max2 = max(max2, A[i] - i);
        min1 = min(min1, A[i] + i);
        min2 = min(min2, A[i] - i);
    }
    sum = max(max1-min1, max2-min2);
    return sum;
 
}
