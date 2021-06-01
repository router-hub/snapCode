vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size(),start;
    vector<int>B;
    for(int i=0;i<n;i++)
    {
        if(A[i]!=0)
        {
            start=i;
            break;
        }
    }
    for(int i=start;i<n;i++)
    {
        B.push_back(A[i]);
    }
  //  int c=0;
    for(int i=B.size()-1;i>=0;i--)
    {
        if(B[i]!=9)
        { 
            B[i]+=1;
             break;
        }
         else
         {
             B[i]=0;
            // c=1;
         }
    }
    if(B[0]==0)
    {
        vector<int>C;
        C.push_back(1);
        for(int i=0;i<B.size();i++)
        C.push_back(0);
        return C;
    }
    return B;
}
