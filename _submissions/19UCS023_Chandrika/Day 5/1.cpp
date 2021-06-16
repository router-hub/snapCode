int Solution::solve(int A, vector<int> &B) {
    if(A<3)
    {
        return 0;
    }
    int ans=0;
    int sum=0;
    for(int i=0;i<A;i++)
    {
        sum+=B[i];
    }
    if(sum%3!=0)
    {
        return 0;
    }
    else if(sum%3==0)
    {
    int currSum=0;
    vector<int>pre(A);
    vector<int>suf(A);
    for(int i=0;i<A;i++)
    {
        suf[i]=sum-currSum;
        currSum+=B[i];
        pre[i]=currSum;
    }
    const int sum1=sum/3;
    for(int i=0;i<A;i++)
    {
        if(pre[i]==sum1)
        {
            for(int j=i+2;j<A;j++)
            {
                if(suf[j]==sum1)
                ans++;
            }
        }
    }
    }
    return ans;
    
    
}
