/*
DAY-2:
PROBLEM 14:BULBS
LINK:https://www.interviewbit.com/problems/interview-questions/
*/
int Solution::bulbs(vector<int> &A) 
{
    int reverse=0;
    int ans=0;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        if((A[i]==0 && !reverse)||(A[i]==1 && reverse))
        {
            ans++;
            reverse=1-reverse;
        }
    }
    return ans;
}
