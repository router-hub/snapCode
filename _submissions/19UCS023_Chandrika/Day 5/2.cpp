bool is_int(float n)
{
    if(floor(n)==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Solution::isPower(int A) {
    if(A<=1)
    {
        return 1;
    }
    for(int i=2;i<=sqrt(A);i++)
    {
        if(is_int(log(A)/log(i)))
        return 1;
    }
    return 0;
}
