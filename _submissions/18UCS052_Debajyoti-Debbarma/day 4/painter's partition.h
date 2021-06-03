int findFeasable(vector<int> &C,int limit){
    int sum=0,painters=1;
    
    for(int i=0;i<C.size();i++){
        sum+=C[i];
        if(sum>limit){
            sum=C[i];
            painters++;
        }
    }
    return painters;
}



int Solution::paint(int A, int B, vector<int> &C) {
   
    int totalLength=0,k=0;
    for(int i=0;i<C.size();i++){
        k=max(k,C[i]);
        totalLength+=C[i];
    }
    
    int low=k,high=totalLength;
    
    while(low<high){
        int mid=(low+high)/2;
        int painters=findFeasable(C,mid);
        if(painters<=A){
            high=mid;
        }else{
            low=mid+1;
        }
        
    }
    low=low*B;
    return low%10000003;
    
}
