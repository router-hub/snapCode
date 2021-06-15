bool isvalid(vector<int> &A, long long int B,long long int n,long long int mid)
{
    long long int student=1,sum=0;
     for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum>mid)
        {
            student++;
            sum=A[i];
        }
        if(student>B)
        return false;
    }
    return true;
}

int Solution::paint(int B, int Cost, vector<int> &A) {
    long long int start=0,end=0,mid,res=-1,n=A.size();
    if(B>n)
    B=n;
    // if(B>n)
    // return res;
    for(int i=0;i<n;i++)
    {
        if(A[i]>start)
        start=A[i];
        end+=A[i];
    }

    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(isvalid(A,B,n,mid))
        {
            res=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    res=res%10000003;
    res=res*Cost%10000003;
    return res;
}
