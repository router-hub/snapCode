vector<int> Solution::twoSum(const vector<int> &A, int B) {
    
    int sum=0;
    vector<vector<int>> arr;
    vector<int> res;
   
  
    
    if(A.size()==0){
        return res;
    }
    
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
           sum=A[i]+A[j];
           if(sum==B){
               res.push_back(j+1);
               res.push_back(i+1);
               arr.push_back(res);
               res.clear();
               break;
           }
        }
    }
    
    if(arr.size()==0){
        return res;
    }
    
  res.clear();
  sort(arr.begin(),arr.end());
  res.push_back(arr[0][1]);
  res.push_back(arr[0][0]);
    
    
    return res;
    
    
}
