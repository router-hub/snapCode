unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 if(A==0)
 return 0;
   vector<int>a(32,0);
    unsigned int ans=0;
    for(int i=0;i<32;i++)
    {
        if(A&1==1)
        a[i]=1;
        // else
        // a[i]=0;
        A=A>>1;
    }
    int k=0;
    for(int i=31;i>=0;i--)
    {
        if(a[i]!=0)
         ans+=pow(2,k);
         
         k++;
    }
    return ans;
    
}
