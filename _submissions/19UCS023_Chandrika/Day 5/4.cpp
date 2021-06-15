int Solution::strStr(const string A, const string B) {
    int m=A.length();
    int n=B.length();
    int count=-1;//index of first occurence of string B in string A
    for(int i=0;i<=m-n;i++)
    {
        string temp=A.substr(i,n);
        if(B==temp)
        {
            count=i;
            break;
        }
    }
    if(count>=0)
    return count;
    return -1;
}
