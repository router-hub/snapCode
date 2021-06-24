int Solution::solve(int A) {
    
        
    int i=1;
    int f=0;
    int B=A;
    A=1;
   
    for(int j=1;A<=B;j++ ){
        bool okay=true;
        for(int i=0;i<32;i++){
            if((j&1<<i)){
                f=i;
            }
        }
        for(int i=0;i<f;i++){
            if(f==i ||i>f) break;
            if(((j&1<<i)&&(j&1<<f-i))||(!(j&1<<i)&&!(j&1<<f-i))){
               
            }else{
                okay=false;
            }
        }
        if(okay){
           
           if(A==B) return j;
            A++;
  
        }
        
    }
    return 0;
    
    
    
    
    
}
