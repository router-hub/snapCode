/*
DAY-1:
PROBLEM 5:NUMBER OF 1 BITS
LINK:https://www.interviewbit.com/problems/number-of-1-bits/
*/
int Solution::numSetBits(unsigned int A) 
{
   unsigned int noOfSetBits=0;
   while(A!=0)
   {
       A=(A&(A-1));
       noOfSetBits++;
   }
   return noOfSetBits;
}

