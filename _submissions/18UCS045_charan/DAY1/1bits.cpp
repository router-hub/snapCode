int Solution::numSetBits(unsigned int A) {
    int c=0;
    while(A)
    {
    A=(A&(A-1));
    c++;
    }
    return c;
    }
