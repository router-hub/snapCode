int Solution::diffPossible(const vector<int> &A, int B) {
    
    vector<int>C(A.begin(),A.end());
    sort(C.begin(),C.end());
    int k=1;
    for(int i=0;i<C.size()-1&&k<C.size(); ){
           int dif=C[i]+B;
           
           if(dif==C[k]&&k!=i) return 1;
           if(C[k]>dif) {
               i++;
           }else{
               k++;
           }
    }
    
    return 0;
}
