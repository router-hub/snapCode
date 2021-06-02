int Solution::divide(int a, int b) {
    if(b==0)return INT_MAX ;
    if(a==0)return 0 ;
    if(b==1)return a ;
    if(a==INT_MIN && b==-1)return 2147483647 ;
int sign= (a<0)^(b<0)==0 ?1:-1 ;
a=abs(a) ;
b=abs(b) ;
int ans=0 ;
while(a-b>=0){
ans++ ;
a=a-b ;
}
return ans*sign ;

}
