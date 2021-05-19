int Solution::findMedian(vector<vector<int> > &a) {
    int r = a.size(),c = a[0].size();
    
    int pos = (r*c+1)/2;
    
    int minE = INT_MAX,maxE = INT_MIN;
    for(int i=0;i<r;i++){
        minE = min(minE, a[i][0]);
        maxE = max(maxE,a[i][c-1]);
    }
    
    while(minE<maxE){
        
        int mid = minE + (maxE-minE)/2;
        
        int p = 0;
        
        for(int i=0;i<r;i++){
            p += (upper_bound(a[i].begin(),a[i].end(),mid) - a[i].begin());
        }
        
        
        if(p<pos) minE = mid+1;
        else maxE = mid;
        
    }
    
    return minE;
    
    
    
    
}
