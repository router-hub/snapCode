/*
DAY-1:
PROBLEM 3:MATRIX MEDIAN
LINK:https://www.interviewbit.com/problems/matrix-median/
*/
int Solution::findMedian(vector<vector<int> > &A) 
{
    vector<int> temp;
    int a,b,n;
    int result;
    a=A.size();
    b=A[0].size();
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            temp.push_back(A[i][j]);
        }
    }
    sort(temp.begin(),temp.end());
    result=0;
    n=temp.size();
    if(!(n&1))
    {
        result=(temp[n/2]+temp[(n/2)-1])/2;
    }
    else
    {
        result=temp[n/2];
    }
    return result;
}
