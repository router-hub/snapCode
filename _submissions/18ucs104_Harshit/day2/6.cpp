int Solution::threeSumClosest(vector<int> &A, int B) {
    
   
    int curr;
    
    sort(A.begin(),A.end());
     int res=A[0]+A[1]+A[A.size()-1];
    
    for(int i=0;i<A.size()-1;i++){
        int l=i+1;
        int r=A.size()-1;
        
        while(l<r){
            curr=A[i]+A[l]+A[r];
            if(curr==B)
                return B;
            
            else if(curr<B)
                l++;
                
                else
                    r--;
                    
                if(abs(curr-B)<=abs(res-B))
                res=curr;
            
        }
        
           while(i+1<&&A[i]==A[i+1])
                i++;
    }
    
    return res;
    
    
}