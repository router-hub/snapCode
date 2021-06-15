int Solution::seats(string A) {
  if(A.length()==0) return 0;
    
    int count=0,start=-1,end=A.length();
    vector<int>Xs;
    
    for(int i=0;i<A.length();i++){
        
        if(A[i]=='x' && count==0){
            start=i;
            count=1;
        }
        if(A[i]=='x'){
            end=i;
            Xs.push_back(i);
        }
        
    }
    
    if(start==-1) return 0;
    
    int mid=Xs[Xs.size()/2];
    
    count=0;
    
    for(int i=mid+1,j=mid+1;i<=end;i++){
        
        if(A[i]=='x'){
            count=count+(i-j);
            j++;
        }
        
    }
    for(int i=mid-1,j=mid-1;i>=start;i--){
        
        if(A[i]=='x'){
            count=count+(j-i);
            j--;
        }
        
    }
    

    return count%10000003;
}




// int Solution::seats(string A) {
//     vector<int> seat;
//     for(int i=0;i<A.size();i++)
//     {
//         if(A[i]=='x')
//         {
//             seat.push_back(i);
//         }
//     }
//     int ans=0,mod=10000003;
//     int sz=seat.size(),md=sz/2;
//     for(int i=0;i<sz;i++)
//     {
//         // cout<<seat[i]<<"\n";
//         ans=ans+(abs(seat[md]-seat[i])-abs(md-i))%mod;
//         ans=ans%mod;
//     }
//     return ans;
// }