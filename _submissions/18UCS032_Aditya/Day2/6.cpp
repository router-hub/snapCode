int Solution::threeSumClosest(vector<int> &a, int z) {
    
    sort(a.begin(),a.end());
    int minD = INT_MAX, n= a.size(),ans;
    
    for(int i =0;i<n-2;i++){
        int j=i+1,k=n-1;
        while(j<k){
            int x = a[i]+a[j]+a[k];
            if(z==x) return x;
            if(abs(z-x)<minD){
                ans = x;
                minD = abs(z-x);
            }
            if(z>x) j++;
            else k--;
            
            
        }
    }
    return ans;
    
}
