/*
Reverse the bits of an 32 bit unsigned integer A.
*/
//code
unsigned int Solution::reverse(unsigned int A) {
    if(A==0) return 0;
    int v[32];
    //cout<<v.size()<<endl;
    for(int i=0;i<32;i++)
    { int temp= A&1;
    if(temp==1)
    v[i]=1;
    else
    v[i]=0;
    A>>=1;
    }
    int j=31;
    unsigned int ans=0;
    for(int i=0;i<32;i++)
    {
        ans+=v[i]*pow(2,j);
        j--;
    }
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
