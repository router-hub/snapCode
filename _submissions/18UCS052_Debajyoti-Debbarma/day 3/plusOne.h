




vector<int> Solution::plusOne(vector<int> &A) {
    
    // unsigned int num=0;
    // vector<int> res;
  
    // for(int i=0;i<A.size();i++){
    //     num=num*10+A[i];
    // }
    
    // num=num+1;

    // while(num!=0){
    //     int n=num%10;
    //     res.push_back(n);
    //     num=num/10;
    // }
    //  reverse(res.begin(),res.end());
     
    //  return res;
    
    int carry=1;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]==9){
            A[i]=0;
            carry=1;
        }else{
           A[i]=A[i]+carry;
           carry=0;
           break;
        }
    }
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            count++;
        }
    }
    if(count==A.size()){
        A.push_back(1);
        reverse(A.begin(),A.end());
    }
    
    for(auto i=A.begin();i!=A.end(); ){
        if(*i==0){
            A.erase(i);
        }else{
            break;
        }
    }
    

    
    
    
    return A;
    
    
}
