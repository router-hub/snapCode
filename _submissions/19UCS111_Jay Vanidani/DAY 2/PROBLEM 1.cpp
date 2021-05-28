/*
DAY-2:
PROBLEM 1:MAX SUM CONTIGUOUS ARRAY
LINK:https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
*/
int Solution::maxSubArray(const vector<int> &A) 
{
    int maxSum=A[0];
    int temp=A[0];
    for(int i=1;i<A.size();i++)
    {
        if(temp+A[i]>A[i])
        {
            temp+=A[i];
        }
        else
        {
            temp=A[i];
        }
        maxSum=max(maxSum,temp);
    }
    return maxSum;
}
