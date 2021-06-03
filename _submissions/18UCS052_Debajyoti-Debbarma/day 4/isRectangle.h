int Solution::solve(int A, int B, int C, int D) {
    
    
    
   if((A==B&&A!=C&&A!=D&&C==D&&C!=B) ||(A==C&&A!=B&&A!=D&&B==D&&C!=B)||(A==D&&A!=B&&A!=C&&B==C&&B!=D) )
    return 1;
    return 0;
   
}
