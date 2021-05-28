/*
Given an integar A.

Compute and return the square root of A.

If A is not a perfect square, return floor(sqrt(A)).
*/
int Solution::sqrt(int A) {
    if (A==0) return 0;
    if(A==2 || A==1) return 1;
    long long int l=1,h=A/2,mid;
    while(l<=h)
 {   mid= l+(h-l)/2;
     long long int x=mid*mid;
     if(x==A) return mid;
      if(mid*mid <= A && (mid+1)*(mid+1) > A) return mid;
     if(x<A) l=mid+1;
     if(x>A) h=mid-1;
 }

 return (int)mid;
}
