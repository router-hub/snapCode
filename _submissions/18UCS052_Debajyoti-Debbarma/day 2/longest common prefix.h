string Solution::longestCommonPrefix(vector<string> &A) {
    
    string shortestString=A[0];
    string result;
    int count=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i].length()<shortestString.length()){
            shortestString=A[i];
        }
    }
    for(int i=0;i<shortestString.length();i++){
        for(int j=0;j<A.size();j++){
            if(shortestString[i]==A[j][i]){
                count++;
            }else{
                break;
            }
        }
        if(count==A.size()){
            result.push_back(shortestString[i]);
        }
        count=0;
    }
    return result;
    
}
