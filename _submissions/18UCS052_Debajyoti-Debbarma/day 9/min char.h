
int Solution::solve(string A) {
    
    string rev=A;
    string  p=A;
    string B=A;
    reverse(rev.begin(),rev.end());
    if(rev==A) return 0;
    // int count=0;
    
    // for(int i=0;i<A.length();i++){
        
    //     if(A[i]!=rev[i]){
    //         count++;
    //         A=A.insert(i,string(1,rev[i]));
    //         rev=A;
    //         reverse(rev.begin(),rev.end());
            
    //     }
    //     if(A==rev) break;
        
    // }
    
    
    string b;
    int index=0;
    
    for(int i=0;i<A.length();i++){
        b=b+string(1,A[i]);
        rev=b;
        reverse(rev.begin(),rev.end());
        if(b==rev){
            index=i;
        }
    }
    
    
    for(int i=index+1;i<A.length();i++){
        p=string(1,A[i])+p;
        rev=p;
        reverse(rev.begin(),rev.end());
        if(p==rev)break;
    }
    
    
    
    return p.length()-A.length();
}
