int Solution::maxSubArray(const vector<int> &A) {
    /*Kadane's Algo*/
    int current_max=A[0];
    int max_so_far=A[0];
    for(int i=1;i<A.size();i++)
    {
        current_max=max(A[i],current_max+A[i]);
        max_so_far=max(max_so_far,current_max);
    }
    return max_so_far;
}
