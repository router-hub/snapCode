int Solution::maxSubArray(const vector<int> &A) {
      
    int currentMax=A[0];
    vector<int> results;
  
    for(int i=0;i<A.size()-1;i++){
        
        results.push_back(A[i]);
       
        for(int j=i+1;j<A.size();j++){
            
            currentMax=currentMax+A[j];
            results.push_back(currentMax);

        }
        
        currentMax=0;
        
    }
    results.push_back(A[A.size()-1]);
    
    if(results.size()!=0)
        currentMax=results[0];
    
    for(int i=0;i<results.size();i++){
        currentMax=max(currentMax,results[i]);
    }
 return currentMax;
  
    
}
