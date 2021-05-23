/*No of set bits in a binary number*/
int Solution::numSetBits(unsigned int A) {
unsigned int no_of_set_bits=0;
while(A!=0)
{
A=(A&(A-1));
no_of_set_bits++;
}
 return no_of_set_bits;   
}
