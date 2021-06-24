int Solution::solve(int A, int B, int C, int D) {
    
if((A==B && B==C && C==D && C==A) || (A==B && C==D))

{
    return 1;
}
else
{
    return 0;
}
    
}
