#define mod 1000000007
int Solution::cntBits(vector<int> &A) {
    long long int ans=0;
    for(int i=0;i<32;i++)
    {int count=0;
    for(int j=0;j<A.size();j++)
        { if((A[j]>>i)&1==1)
            count++;
        }
        ans+=2*count*(A.size()-count);
        ans=ans%mod;
    }
    return (int)ans;
    
}
