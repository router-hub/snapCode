unsigned int Solution::reverse(unsigned int A) {
   
unsigned int ans=0;
for(int i=0;i<32;i++)
{
    ans<<=1;
    ans|=(A&1);//Add the last bit of the integer to the ans
    A>>=1;
}
return ans;
    
}
