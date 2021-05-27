//Keep on right shifting to check every bit and & with last bit to increase count
int Solution::numSetBits(unsigned int A) {
    int count=0;
   while(A)
   {
       count=count+(A&1);
       A=A>>1;
   }
   return count;
}
