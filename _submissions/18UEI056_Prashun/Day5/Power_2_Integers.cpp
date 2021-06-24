int Solution::isPower(int A) {
    if(A==1)
    return 1;
    for(int i=2;i*i<=A;i++)
    { double val=log(A)/log(i);
        if((val-(int)val)<0.00000001)
        return 1;
    }
    return 0;
}
