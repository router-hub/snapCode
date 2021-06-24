bool isvowel(char x)
{ x=toupper(x);
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    return true;
    else
    return false;
}

int Solution::solve(string A) {
    if(A.size()==0) return 0;
    int len=A.length();
    int ans=0;
    for(int i=0;i<len;i++)
{  if(isvowel(A[i]))
     ans=ans+(len-i);
}
    return ans%10003;
}
