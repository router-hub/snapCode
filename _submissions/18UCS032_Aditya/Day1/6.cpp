int Solution::solve(vector<int> &a, int k) {
    sort(a.begin(),a.end());
    int n = a.size();
    if(a.size()==1) return 0;
    
    for (int i=0,j=1;i<n&&j<n;){
        if(i!=j&&a[j]-a[i]==k) return 1;
        
        if(a[j]-a[i]<k) {
         j++;
         
        }
        
        else i++;
    }
    return 0;
}
