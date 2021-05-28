/*
DAY-2:
PROBLEM 5:REVERSE BITS
LINK:https://www.interviewbit.com/problems/reverse-bits/
*/
unsigned int Solution::reverse(unsigned int A) 
{
    int i=0;
    unsigned int num=0;
    while(A)
    {
        num+=pow(2,31-i)*(A%2);
        A/=2;
        i++;
    }
    return num;
}

