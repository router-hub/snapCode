int Solution::findMedian(vector<vector<int> > &A) {
      int r=A.size(),c=A[0].size();
    int req=(r*c+1)/2;
    int minm=INT_MAX,maxm=INT_MIN;
    for(int i=0;i<r;i++){
        minm=min(minm,A[i][0]);
        maxm=max(maxm,A[i][c-1]);
    }
    while(minm<maxm){
        int mid=minm+(maxm-minm)/2;
        int place=0;
        for(int i=0;i<r;i++)
         place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
         
        if(place<req) minm=mid+1;
        else maxm=mid;
    }
    return minm;
}
