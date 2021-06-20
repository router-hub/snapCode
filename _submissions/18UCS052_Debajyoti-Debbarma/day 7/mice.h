int Solution::mice(vector<int> &A, vector<int> &B) {
    
    
    if(A.size()==0 || B.size()==0) return 0;
    
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    
    for(int i=0;i<B.size();i++){
       ans=max(ans,abs(A[i]-B[i]));
    }
    
    return ans;
    
    
}
