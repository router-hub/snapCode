int Solution::reverse(int A) {
   int sign=(A>0)?1:-1;
    A=abs(A);
    long long int result=0;
    while(A)
    { result=result*10+(A%10);
        A=A/10;
    }
    result=result*sign;
    if(result>INT_MAX || result<INT_MIN)
    return 0;
    return result;
}
