// int countBit(int a){
//     int x=0;
//     while(a){
//         a =a & a-1;
//         x++;
//     }
//     return x;
// }
#define mod   1000000007
int Solution::hammingDistance(const vector<int> &a) {
    int n=a.size();
    long lo// int countBit(int a){
//     int x=0;
//     while(a){
//         a =a & a-1;
//         x++;
//     }
//     return x;
// }
#define mod   1000000007
int Solution::hammingDistance(const vector<int> &a) {
    int n=a.size();
    long long p=0;
    if(n==1) return 0;
    
    // for(int i=0 ; i<n;i++){
    
    //     for(int j=i+1;j<n;j++){
    //       int t  = countBit(a[i]^a[j]);
    //     //   cout<<a[i]<<" "<<a[j]<<" "<<(a[i]^a[j])<<t<<" ";
    //         p += t;
    //     }
    // }
    
    // return p*2;
    
    for(int i=0;i<31;i++){
        int x=0,y=0;
        for(int j=0;j<n;j++){
            // cout<<(a[j] && (1<<i));
            if(a[j] & (1<<i)) x++; else y++;
            
        }
        p += (long long)2*(long long)x*(long long)y;
        p = p%mod;
        if(p>=mod)  p = p-mod;
    }
    return (int)p;
    
}
ng p=0;
    if(n==1) return 0;
    
    // for(int i=0 ; i<n;i++){
    
    //     for(int j=i+1;j<n;j++){
    //       int t  = countBit(a[i]^a[j]);
    //     //   cout<<a[i]<<" "<<a[j]<<" "<<(a[i]^a[j])<<t<<" ";
    //         p += t;
    //     }
    // }
    
    // return p*2;
    
    for(int i=0;i<31;i++){
        int x=0,y=0;
        for(int j=0;j<n;j++){
            // cout<<(a[j] && (1<<i));
            if(a[j] & (1<<i)) x++; else y++;
            
        }
        p += (long long)2*(long long)x*(long long)y;
        p = p%mod;
        if(p>=mod)  p = p-mod;
    }
    return (int)p;
    
}
