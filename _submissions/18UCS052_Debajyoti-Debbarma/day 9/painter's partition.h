bool findFeasable(vector<int> &C,int painters,int timer){
    
    int current=0;
    
    for(int i=0;i<C.size();i++){
        if(C[i]>timer){
            return false;
        }
        if(current+C[i]>timer){
            current=C[i];
            painters--;
              if(painters==0) return false;
        }else{
            
            current+=C[i];
            
        }
        
        
    }
    return true;
    
}



int Solution::paint(int A, int B, vector<int> &C) {
   
   long long tot=0;
   long long maxm=0;
   long long ans;
 
   
    for(int i=0;i<C.size();i++){
        tot+=C[i];
        maxm=max(maxm,(long long)C[i]);
    }
    if(A==C.size()) return (maxm*B)%10000003;
    if(A==1) return (tot*B)%10000003;
    
    int high=tot;
    int low=maxm;
    
    
    while(low<=high){
        
        int mid=(low+high)/2;
        
        if(findFeasable(C,A,mid)){
            ans=mid;
            high=mid-1;
            
        }else{
            low=mid+1;
        }
        
        
    }
    
    return (ans*B)%10000003;
    
    
    
}
