int Solution::isPower(int A) {
    
    if(A==1){
        return 1;
    }
    
    for(int i=2;i<=A/2;i++){
        
       if(A%i==0){
           int a=A/i;
           while(a%i==0){
               a=a/i;
           }
           if(a==1){
               return 1;
           }
       }
    }
    
    return 0;
}
