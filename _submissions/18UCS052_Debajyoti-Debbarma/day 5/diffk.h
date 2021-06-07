int Solution::diffPossible(vector<int> &A, int B) {
    
    
    int k=1;
    for(int i=0;i<A.size()-1&&k<A.size(); ){
           int dif=A[i]+B;
           
           if(dif==A[k]&&k!=i) return 1;
           if(A[k]>dif) {
               i++;
           }else{
               k++;
           }
    }
    
    return 0;
}
