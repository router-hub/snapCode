int Solution::threeSumClosest(vector<int> &A, int B) {
    
    vector<int> diffs;
    int sum=0;
    
    for(int i=0;i<A.size()-2;i++){
        for(int j=i+1;j<A.size()-1;j++){
            for(int k=j+1;k<A.size();k++){
            sum=A[i]+A[j]+A[k];
            if(sum==B){
                return sum;
            }
            diffs.push_back(sum);
            }
        }
    }
  
    for(int i=0; ;i++){
        int neg=B-i;int pos=B+i;
        for(int j=0;j<diffs.size();j++){
            if(neg==diffs[j])
                return neg;
            if(pos==diffs[j])
                return pos;
        }
      
    }
    
   
}
