vector<vector<int> > Solution::threeSum(vector<int> &A) {
    long long sum=0;
    vector<vector<int>> res;
    vector<int> arr;
    
    if(A.size()==0){
        return res;
    }
    
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            for(int k=j+1;k<A.size();k++){
                sum=(long long)A[i]+(long long)A[j]+(long long)A[k];
                if(sum==0){
                   
                        arr.push_back(A[i]);
                        arr.push_back(A[j]);
                        arr.push_back(A[k]);
                        sort(arr.begin(),arr.end());
                        res.push_back(arr);
                        arr.clear();
                    
                }
            }
                
        }
    }
    
  sort(res.begin(),res.end());
    
  res.erase(unique(res.begin(), res.end()), res.end());
    
    
    return res;
    
    
    
    
}
