
// long long int mod = 1000000007;
//  int largestPowerOf2inrange(int n) {
//             int x = 0;

//             while ((1 << x) <= n) {
//                 x++;
//             }

//             return (x - 1)%mod;
//         }
int Solution::solve(int A) {

            //  if (n == 0) {
            //     return 0;
            // }

            // int x = largestPowerOf2inrange(n);
            // x=x%mod;
            // int btill2x = x * (1 << (x - 1));
            // int msb2xton = n - (1 << x) + 1;
            // int rest = n - (1 << x);
            // int ans = btill2x%mod + msb2xton%mod + solve(rest)%mod;
            // return ans%mod;
            
            
            if(A==0)return 0;
long long int mx = log2(A);
long long int x = pow(2,mx);
x%=1000000007;
return (x/2*mx+(A-x+1)+solve(A-x))%1000000007;
}

