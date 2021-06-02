int Solution::isPower(int A) {
    
    if(A==1)
  return 1;
  int ans=0,i,j;
    for(i=2;i<=32;i++)
    {
         for(j=2;j<=sqrt(A);j++)
    {
        if(pow(j,i)==A)
        {
            return 1;
        }
    }
    }
    
   
    return 0;
}
