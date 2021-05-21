unsigned int Solution::reverse(unsigned int A) {
    

       int i=0;
        unsigned int nums=0;
        while(A){
            nums+=pow(2,31-i)*(A%2);
            A=A/2;
            i++;
        }
        return nums;
    
    
}
