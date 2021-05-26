int Solution::sqrt(int n) {
    if(n<=1)
    return n;
    int l=1,h=n,ans;
    while(l<=h){
        int mid = l + (h-l)/2;
         int x = mid*mid;
        if(x==n)
        return mid;
        
        else if(x<n){
            l = mid+1;
            ans = mid;
        }
        // l = mid+1;
        else
        h = mid-1;
    }
    
    return ans;
}
