int Solution::candy(vector<int> &A) {
    
    if(A.size()==0){
        return 0;
    }
    
    int rating,count=0,mxCandy=1;
    
    vector<int> given; 
    
    rating=A[0];
    given.push_back(1);
    
    for(int i=1;i<A.size();i++){
        if(A[i]>rating){
            mxCandy++;
            rating=A[i];
            given.push_back(mxCandy);
            
        }else{
            mxCandy=1;
            given.push_back(mxCandy);
            // for(int j=i;j>=0;j--){
                
            //     if(A[j]<A[j-1] && given[j]==given[j-1]){
            //         given[j-1]+=1;
            //     }
                
            // }
     
            rating=A[i];
          
        }
    }
    
    
    for(int i=A.size()-1;i>0;i--){
        if(A[i-1]>A[i] &&given[i-1]<=given[i]){
            given[i-1]=given[i]+1;
            // max(given[i]+1,given[i-1]);
        }
    }
    
    
    
    
    
    for(int i=0;i<given.size();i++){
        count+=given[i];
    }
    
    
    return count;
    
}
