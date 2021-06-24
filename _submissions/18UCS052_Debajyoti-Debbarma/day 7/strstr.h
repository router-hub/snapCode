int Solution::strStr(const string A, const string B) {
    
    
    if(A.length()==0 || B.length()==0){
        return -1;
    }
    
    for(int i=0;i<A.length();i++){
        if(A[i]==B[0]){
            int k=i+1;
            int counter=0;
            for(int j=1;j<B.length();j++){
                if(A[k]==B[j]){
                    counter++;
                }else{
                    break;
                }
               k++;
            }
            if(counter==B.length()-1){
                return i;
            }
        }
    }
    return -1;
    
    
}
