int Solution::solve(int l, vector<int> &arr) 
{
    if(l<3) return 0;
    int sum = 0;
    for(auto x: arr) sum+=x;
    
    if(sum%3!=0) return 0;
    int eachPart = sum/3;
    vector<int> flags(l, 0);
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        sum+=arr[i];
        if(sum == eachPart)
        {
            flags[i] = 1;
        }
    }
    for(int i=l-2;i>=0;i--)
    {
        flags[i]+=flags[i+1];
    }
    
    sum = 0;
    int ans = 0;
    for(int i=0;i<l-2;i++)
    {
        sum+=arr[i];
        if(sum == eachPart)
            ans+=flags[i+2];
    }
    return ans;
    
}
