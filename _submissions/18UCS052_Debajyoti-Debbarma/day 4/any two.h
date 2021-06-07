int Solution::anytwo(string A) {
    
    vector<vector<char>> combs;
    
    if(A.length()==0) return 0;
    
    for(int i=0;i<A.length()-1;i++){
        for(int j=i+1;j<A.length();j++){
            char a=(char)i;
            char b=(char)j;
            combs.push_back({i,j,A[i],A[j]});
            
        }
        
    }
    
    combs.erase(unique(combs.begin(),combs.end()),combs.end());
    
    for(int i=0;i<combs.size();i++){
        for(int j=i+1;j<combs.size();j++){
            if(combs[i][2]==combs[j][2] && combs[i][3]==combs[j][3]&&combs[i][0]!=combs[j][0]&&combs[i][1]!=combs[j][1]){
                
                return 1;
            }
        }
        
    }
    
    
    
    return 0;
    
}
