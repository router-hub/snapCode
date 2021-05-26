/*
    Kaedan's algorithm
*/

int Solution::maxSubArray(const vector<int> &A) {
    
    int curr=0;
    int msf=INT_MIN;
    
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<0)
        count++;
    }
    
    if(count==A.size()){
        
        for(int i=0;i<A.size();i++)
        msf=max(A[i],msf);
        
    }
    
    else{
    for(int i=0;i<A.size();i++){
        curr=curr+A[i];
        
        if(curr<0)
        curr=0;
        
        else if(curr>msf)
        msf=curr;
    }
    }
    return msf;
    
    
}
