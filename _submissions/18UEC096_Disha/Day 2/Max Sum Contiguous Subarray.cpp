//We can start by brute force by considering all the subarray for every index 
//for(i=1 to n-1)
//for(j=i to n-1)
//{  for(int k=i;k<=j;k++)
//      sum=sum+arr[k];
//}
//so it will be a O(n^3) solution.To optimise it , we can use the previous computed presum and add current element to it, it will give O(n^2).
//For O(n) solution , we follow kadane's algo that takes  a greedy approach by:
//simply adding elements when positive and when negative, storing the current sum & starting from 0.Just one thing to check with interviewer at the beginning that whether a 0 size 
//subarray will be considered i.e. if array of 1 size with element -500 is given, then we have to return -500 or we may not consider any elements and return 0.
int Solution::maxSubArray(const vector<int> &A) {
    //-2 1 -3 4 -1 2 1 -5 4
    //-2 1 -2 4 3 5 6 1 5
    //check with the interviewer in beginning that is it possible that it does not take 
    //any element.
    int presum=0,mxsum=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        presum=presum+A[i];
        mxsum=max(mxsum,presum);
        if(presum<0)
            presum=0;
        
    }
    return mxsum;
}
