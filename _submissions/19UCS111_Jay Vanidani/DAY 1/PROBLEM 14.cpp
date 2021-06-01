/*
DAY-1:
PROBLEM 14:HIGHEST PRODUCT
LINK:https://www.interviewbit.com/problems/highest-product/
*/
int Solution::maxp3(vector<int> &A) 
{
    int n=A.size();
    int ans=0;
    sort(A.begin(),A.end(),greater<int>());
    int firstThree=A[0]*A[1]*A[2];
    int negativeTwo=A[n-1]*A[n-2]*A[0];
    ans=max(firstThree,negativeTwo);
    return ans;
}
