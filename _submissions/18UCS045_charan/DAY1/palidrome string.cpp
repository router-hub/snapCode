#include<string>
int Solution::isPalindrome(string A) {
    string s="";
    int ans=1;
    int n=A.length();
    int j=0;
    transform(A.begin(),A.end(),A.begin(),::tolower);
for(int i=0;i<A.length();i++)
{
    
    if(isalnum(A[i]))
    {
        s.push_back(A[i]);
    }
}
int N=s.length()-1;
for(int i=0;i<=N/2;i++)
{
    if(s[i]!=s[N-i])
    {
        ans=0;
        break;
    }
}
return ans;
}
