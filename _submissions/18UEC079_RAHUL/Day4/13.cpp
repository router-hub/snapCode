int Solution::anytwo(string A) {
    
    int n=A.length(),c=0,temp=0,count=0;
    vector<bool>v(n,false);
    if(n>=3)
    {
    for(int i=0;i<n-1;i++)
    {   
       if(A[i]==A[i+1])
       count++;
       if(count==2)
       return 1;
    }
    }
    int i,j;
    for( i=0;i<=n-1;i++)
    {   if(v[i]==false)
        v[i]=true;
        else
        continue;
        for(j=i+1;j<=n-1;j++)
        {
            if(A[i]==A[j] && v[j]==false && j>temp)
            {
                v[j]=true;
                c++;
                temp=j;
                break;
            }
        }
        if(c==2)
        return 1;
    }
    return 0;
}
