int Solution::singleNumber(const vector<int> &A) {
    unordered_map<int,int> store;
    
    if(A.size()==0) return 0;
    
    for(int i=0;i<A.size();i++){
        
        store[A[i]]++;
    }
    
    for(auto it=store.begin();it!=store.end();it++){
        if(it->second==1) return it->first;
        
    }
    
}
