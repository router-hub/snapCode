/*
DAY-2:
PROBLEM 2:SUM OF PAIRWISE HAMMING DISTANCE
LINK:https://www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/
*/
#define mod 1000000007
int Solution::hammingDistance(const vector<int> &A)
{
    long long int n=A.size();
    long long int ans=0;
    long long count=0;
    for(int i=0;i<31;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(A[j]&(1<<i))
            {
                count++;
            }
        }
        ans=(ans+count*(n-count)*2)%mod;
    }
    return ans;
}
