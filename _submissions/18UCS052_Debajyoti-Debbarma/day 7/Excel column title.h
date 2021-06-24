string Solution::convertToTitle(int n) {
    
    
    // map<int, char> c;
    // string ans="";
    
    // for(int i=1,j='A';i<=26;i++,j++){
        
    //     c.insert(pair<int,char>(i,j));
        
    // }
    // int k=0;
    // while(A!=0){
        
    //     int a=(A)%26;
        
    //     if(a!=0){
    //         auto it=c.find(a-k);
    //         ans=(it->second)+ans;
    //         k=0;
    //     }
        
    //     if(a==0){
    //         ans="Z"+ans;
    //         k=1;
    //     }
        
    //     A=A/26;
        
    // }
   
    // return ans;
    
    string ans;
    
    while (n) {
        ans = char ((n - 1) % 26 + 'A') + ans;
        n = (n - 1) / 26;
    }
    
    return ans;
}
