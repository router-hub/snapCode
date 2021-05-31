string Solution::countAndSay(int A) {
    if(A==1)
    return "1";
    string s="1";
    int j;
    for(int i=2;i<=A;i++)
    {
        int n=s.length();
        int c=0;
         string curr="";
         for(j=0;j<n;j++)
         {
             if(j==0||s[j]==s[j-1])
             {
                 c++;
             }
             else
             {
                 curr+=to_string(c)+s[j-1];
                 c=1;
             }
             
         }
           curr+=to_string(c)+s[j-1];
           s=curr;
    }
    return s;
    
}
