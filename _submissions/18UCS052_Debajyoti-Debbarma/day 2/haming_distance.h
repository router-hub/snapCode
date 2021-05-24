
vector<int> convertToBinary(int num){
    
    vector<int>bin;
    
    while(num!=0){
        bin.push_back(num%2);
        num=num/2;
    }
    
    reverse(bin.begin(),bin.end());
    return bin;
    
    
}

int Solution::hammingDistance(const vector<int> &A) {
    
    
    vector<vector<int>>binaryForms(A.size());
    int count=0;
    
    for(int i=0;i<A.size();i++){
        binaryForms[i]=convertToBinary(A[i]);
    }
    
    int maxOfAll=0;
    
    for(int i=0;i<binaryForms.size();i++){
        int a=binaryForms[i].size();
      maxOfAll=max(a,maxOfAll);
      reverse(binaryForms[i].begin(),binaryForms[i].end());
    }
    for(int i=0;i<binaryForms.size();i++){
        int limit=maxOfAll-binaryForms[i].size();
        for(int j=0;j<limit;j++){
            binaryForms[i].push_back(0);
        }
    }
    
    for(int i=0;i<binaryForms.size();i++){
      reverse(binaryForms[i].begin(),binaryForms[i].end());
    }
    // for(int i=0;i<binaryForms.size();i++){
    //     for(int j=0;j<(31-binaryForms[i].size());j++){
    //         binaryForms[i].push_back(0);
    //     }
    // }
    // for(int i=0;i<binaryForms.size();i++){
    //   reverse(binaryForms[i].begin(),binaryForms[i].end());
    // }
    
 
    for(int i=0;i<binaryForms.size();i++){
        for(int j=i+1;j<binaryForms.size();j++){
            for(int k=0;k<binaryForms[i].size();k++){
                if(binaryForms[i][k]!=binaryForms[j][k]){
                    count++;
                    
                    
                }
            }
        }
    }
    for(int i=binaryForms.size()-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            for(int k=binaryForms[i].size()-1;k>=0;k--){
                if(binaryForms[i][k]!=binaryForms[j][k]){
                    count++;
                    
                    
                }
            }
        }
    }
    
   
    
    return count;
}
