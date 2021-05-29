int Solution::sqrt(int A) {
    
    long long int l=1,h=A,mid,ans;
    if(A==0||A==1)
    return A;
    // if(A<=3)
    // return 1;
    
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(mid*mid==A)
        return mid;
        else if(mid*mid>A)
        h=mid-1;
       
        else
       { l=mid+1;
        ans=mid;}
    }
    return ans;
}
