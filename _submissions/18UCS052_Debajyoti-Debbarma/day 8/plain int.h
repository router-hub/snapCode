int Solution::isPalindrome(int A) {
    
    if(A<0) return 0;
    
    int b=A;
     int r=0;
    while(A!=0){
    
      int a=A%10;
       r=r*10+a;
      A=A/10;
        
        
    }
    if(r==b) return 1;
    
    return true;


}
