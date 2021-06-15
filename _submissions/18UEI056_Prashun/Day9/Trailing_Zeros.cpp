int Solution::trailingZeroes(int A) {
//count=n/5+n/25+n/125+...
if(A<0) return 0;
int count=0;
for(int i=5;A/i>=1;i*=5)
    count+=A/i;

return count;
}
