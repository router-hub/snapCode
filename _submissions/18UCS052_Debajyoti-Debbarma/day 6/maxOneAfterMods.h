int Solution::solve(vector<int> &A, int B) {
    
    
    int n=A.size();
    int l=0, i=0, count=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            count++;
        }
        while(count>B){
            if(A[l]==0)count--;
            l++;
        }
        ans=max(ans, i-l+1);
    }
    return ans;
    
    // int count=0,ans=0;
    
    // for(int i=0;i<A.size();i++){
    //     int l=i;
        
    //     count=0;
       
    //     vector<int> dup(A.begin(),A.end());
        
    //     for(int j=0;j<B&&l<A.size(); ){
    //         if(dup[l]==0){
    //             dup[l]=1;
    //             j++;
    //             l++;
    //         }else{
    //             l++;
    //         }
          
    //     }
        
    //     for(int k=0;k<dup.size();k++){
            
    //         if(dup[k]==1){
    //             count++;
    //         }else{
    //             count=0;
    //         }
    //         ans=max(count,ans);
            
    //     }
      
        
    // }
  
    // return ans;
    
    
    
}
