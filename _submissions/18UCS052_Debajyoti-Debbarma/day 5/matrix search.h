int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    if(A.size()==0) return 0;
    
    int targetRow=0;
    
    for(int i=0;i<A.size();i++){
        int n=A[i].size()-1;
        if(B>=A[i][0] && B<=A[i][n]){
            targetRow=i;
            break;
        }
        
    }
    
    int limit=A[targetRow].size();
    for(int i=0;i<limit;i++){
        if(A[targetRow][i]==B){
            return 1;
        }
    }
    
    return 0;
    
    
}
