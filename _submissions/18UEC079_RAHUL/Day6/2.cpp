int Solution::titleToNumber(string A) {
    int i,n=A.length();
    long long int ans=0,count=1;
    i=n-1;
    while(i>=0)
    {
        int index=A[i]-64;
        ans+=count*index;
        count*=26;
        i--;
    }
    return ans;
}
