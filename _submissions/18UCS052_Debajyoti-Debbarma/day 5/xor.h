int Solution::findMinXor(vector<int> &A) {
    
    if(A.size()==0) return 0;
    
    int ans=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
            ans=min(ans,A[i]^A[i+1]);
    }
    return ans;
    
    
}
