vector<int> Solution::lszero(vector<int> &A) {
    
    vector<int> res;
    int sum=0;
    int dif=0;
    
    for(int i=0;i<A.size();i++){
        for(int j=i;j<A.size();j++){
            sum=sum+A[j];
            int d=j-i;
            if(sum==0 && dif<d){
                res.clear();
                dif=d;
                for(int k=i;k<=j;k++){
                    res.push_back(A[k]);
                }
                
            }
        }
        sum=0;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]==0 && res.size()==0){
            res.push_back(0);
            break;
        }
    }
    
   return res;
}
