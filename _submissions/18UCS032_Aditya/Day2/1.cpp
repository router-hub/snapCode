int Solution::maxSubArray(const vector<int> &a) {
    int m=a[0],l=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(l+a[i]>a[i]){
            l = a[i]+l;
        } 
        else l=a[i];
        
        m = max(l,m);
    }
   return m;
}
