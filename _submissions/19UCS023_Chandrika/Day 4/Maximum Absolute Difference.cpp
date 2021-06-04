int Abs_Sum(vector<int>&A,int i,int j)
{
    return abs(A[i]-A[j])+abs(i-j);
}

int Solution::maxArr(vector<int> &A) {
    int maxAbs_Sum=INT_MIN;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i;j<A.size();j++)
        {
            maxAbs_Sum=max(maxAbs_Sum,Abs_Sum(A,i,j));
        }
    }
    return maxAbs_Sum;
}

