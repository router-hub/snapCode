int Solution::singleNumber(const vector<int> &A) {
    
    
    
    vector<int> B(A.begin(),A.end());
    
    sort(B.begin(),B.end());
    
    for(int i=0;i<B.size(); ){
        
        if(B[i]!=B[i+1]) return B[i];
        i=i+2;
        
    }
}
