int Solution::titleToNumber(string A) {
    int n=A.size();
    int ans=0;
    for(int i=A.size()-1;i>=0;i--)
    {//  int x=A[i]-64;
        ans+=(A[i]-64)*(pow(26,n-1-i));
    }
    // ans=ans+(A.size()-1)*25;
    return ans;
    
}
