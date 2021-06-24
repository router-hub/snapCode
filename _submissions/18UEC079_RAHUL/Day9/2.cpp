int Solution::reverse(int A) {
  /* int d,s=0;
   long long int sum=0;
  if(A<0)
  s=1;
  if(A>INT_MAX||A<INT_MIN)
  return 0;
   A=abs(A);
    while(A)
    {
        d=A%10;
        A=A/10;
        sum=sum*10 + d;
        if(sum>INT_MAX||sum<INT_MIN)
            return 0;
    }
    if(s==0)
    return sum;
    return -sum;  ORRRRRRRRRRRR*/
    int n=A;
     long long res=0;
    while(n){
        res=res*10+n%10;
        if(res>INT_MAX||res<INT_MIN) return 0;
        n=n/10;
    }
    return res;
}
