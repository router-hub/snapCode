nt Solution::numSetBits(unsigned int A) {
    if(A<0){
        return 0;
    }
    int count = 0;
    while(A!=0)
    {
        if(A%2 == 1){
            count++;
        }
        A = A/2;
    }
    return count;