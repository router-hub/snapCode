#define MOD 1000000007

int Solution::solve(int n) {
    
    // int count=0;
    
    // for(int i=1;i<=A;i++){
        
    //     for(int j=0;j<32;j++){
            
    //         if(1<<j&i){
    //             count++;
    //         }
            
            
    //     }
        
    // }
    // return count;
    
     int res = 0;
    int p = 2;
    int f = 1;
    while(f)
    {
        if(!(n / p)) f = 0;
        res = (res + ((n / p) * (p >> 1)) % MOD + max(0, n % p - (p >> 1) + 1)) % MOD;
        p <<= 1;
    } 
    
    return res;
}
