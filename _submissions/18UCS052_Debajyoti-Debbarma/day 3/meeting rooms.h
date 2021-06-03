int Solution::solve(vector<vector<int> > &A) {
    
    if(A.size()==0){
        return 0;
    }
    vector<int> alreadyTaken;
    
    int count=1,check=0;
    
    sort(A.begin(),A.end());
    
    
    for(int i=1;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            
            auto it=find(alreadyTaken.begin(),alreadyTaken.end(),j);
            
            if(A[i][0]>=A[j][1] && j!=i && it==alreadyTaken.end()){
                alreadyTaken.push_back(j);
                break;
            }
            
            if(j!=i)
            check++;
            
        }
        if(check==A.size()-1){
            count++;
        }
        check=0;
    }
    return count;
    
    
}
