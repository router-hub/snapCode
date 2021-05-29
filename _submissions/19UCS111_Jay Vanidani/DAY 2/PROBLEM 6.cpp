/*
DAY-2:
PROBLEM 6:3 SUM
LINK:https://www.interviewbit.com/problems/3-sum/
*/
int Solution::threeSumClosest(vector<int> &A, int B) 
{
    int currSum;
    sort(A.begin(),A.end());
    int ans=A[0]+A[1]+A[A.size()-1];
    for(int i=0;i<A.size()-1;i++)
    {
        int leftMost=i+1;
        int rightMost=A.size()-1;
        while(leftMost<rightMost)
        {
            currSum=A[i]+A[leftMost]+A[rightMost];
            if(currSum==B)
            {
                return B;
            }
            else if(currSum<B)
            {
                leftMost++;
            }
            else
            {
                rightMost--;
            }
            if(abs(currSum-B)<=abs(ans-B))
            {
                ans=currSum;
            }
        }
        while(i+1&&A[i]==A[i+1])
        {
            i++;
        }
    }
    return ans;
}
