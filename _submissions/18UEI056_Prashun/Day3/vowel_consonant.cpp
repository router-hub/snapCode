int Solution::solve(string A) {
    int cnt1 = 0, cnt2 = 0, ans = 0;
for(int j=0;j<A.length();j++)
{
if(A[j] == ‘a’ || A[j] == ‘o’ || A[j] == ‘e’ || A[j] == ‘i’ || A[j] == ‘u’)
cnt1++;
else cnt2++;
}
for(int j=0;j<A.length();j++)
{
if(A[j] == ‘a’ || A[j] == ‘o’ || A[j] == ‘e’ || A[j] == ‘i’ || A[j] == ‘u’)
{
cnt1 --;
ans += cnt2;
}
else
{
cnt2 --;
ans += cnt1;
}
}
return ans%1000000007;
}
