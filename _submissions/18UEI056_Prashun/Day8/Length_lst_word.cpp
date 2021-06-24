int Solution::lengthOfLastWord(const string A) {
    int count=0,ans=0;
    for(int i=0;i<A.size();i++)
    { if(A[i]!=' ')
    count++;
     if(count!=0)ans=count;
    if(A[i]==' ')    
    {
        count=0;}
    }
    if(A.size()==0 || A.size()==1)
     return count;
    return ans;
}
