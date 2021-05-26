//Find the contiguous subarray within an array, A of length N which has the largest sum.

//code
int Solution::maxSubArray(const vector<int> &A) {
    int max_sum=INT_MIN;
int curr_sum=0;
for(int i=0;i<A.size();i++)
{ curr_sum+=A[i];
    max_sum=max(max_sum,curr_sum);
    if(curr_sum<0) curr_sum=0;
}
return max_sum;
}
