int Solution::strStr(const string A, const string B) {
    int i=0,j=0,k=0,flag=0;
    int n=A.size();
    int m=B.size();
   
    for(int i=0;i<A.size();i++)
    { j=0,k=i;
    while(A[k]==B[j])
    { if(j==m-1) 
    {return i;}
    j++,k++;
    }
    }
    return -1;
}
