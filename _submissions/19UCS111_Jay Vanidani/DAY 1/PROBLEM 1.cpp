/*
DAY-1:
PROBLEM 1:MIN STEPS IN INFINITE GRID
LINK:https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
*/
int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int a,b;
    int n=A.size();
    int minSteps=0;
    for(int i=0;i<n-1;i++)
    {
        a=abs(A[i]-A[i+1]);
        b=abs(B[i]-B[i+1]);
        minSteps+=max(a,b);
    }
    return minSteps;
}
