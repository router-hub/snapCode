/*int Abs_Sum(vector<int>&A,int i,int j)
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
}*/
int Solution::maxArr(vector<int>&A)
{
    int max1=INT_MIN,min1=INT_MAX,max2=INT_MIN,min2=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        max1=max(max1,A[i]+i);//1. A[i]>A[j] && i>j=+( A[i]-A[j])) + +(i-j)=A[i]+i - (A[j]+j)=max(A[i]+i) and min(A[j+j)
        min1=min(min1,A[i]+i);//2.A[i]<A[j] && i<j=-(A[i]-A[j]) + -(i-j)=-(A[i]+i) +(A[j]+j)=-(A[i]+i -(A[j]+j)= max(A[i]+i) and min(A[j]+j)
        //case 1 and case 2 gives same ans
        max2=max(max2,A[i]-i);//3. A[i]>A[j] && i<j=(A[i]-A[j])+ -(i-j)=A[i]-i -(A[j]-j)=max (A[i]-i) ans min(A[j]-j)
        min2=min(min2,A[i]-i);//4. A[i]<A[j] && i>j=-(A[i]-A[j]) + (i-j)=-(A[i]-i) + (A[j]-j)=-(A[i]-i -(A[i]-i))=max A[i]+i and min(A[j]-j)
    }//xase 3 and 4 gives same ans
    int res1=max1-min1;
    int res2=max2-min2;
    return max(res1,res2);
}
