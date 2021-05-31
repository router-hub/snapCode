#define mod 1000000007

long long int dp[101]; 
  
long long int nCr[101][101]; 
  
int logt[101]; 
  
long long int calculateNcR(int n, int r)
{
    if (r > n)
        return 0;
    if (n <= 1)
        return 1;
    if (r == 0)
        return 1;
  
    if (nCr[n][r] != -1)
        return nCr[n][r];
  
    long long int ans = calculateNcR(n - 1, r - 1)%mod + calculateNcR(n - 1, r)%mod;
    nCr[n][r] = ans%mod;
    return ans%mod;
}
  
int getLeft(int n)
{
    if (n == 1)
        return 0;
  
    int h = logt[n];
    int numh = (1 << h);

    int last = n - ((1 << h) - 1);
  
    if (last >= (numh / 2))
        return (1 << h) - 1;
    else
        return (1 << h) - 1 - ((numh / 2) - last);
}
  

long long int numberOfHeaps(int n)
{
    if (n <= 1)
        return 1;
  
    if (dp[n] != -1)
        return dp[n];
  
    int left = getLeft(n);
    long long int ans = (calculateNcR(n - 1, left)%mod * numberOfHeaps(left))%mod * (numberOfHeaps(n - 1 - left)%mod)%mod;
    dp[n] = ans % mod;
    return ans % mod;
}

int Solution::solve(int n) {
    for (int i = 0; i <= n; i++)
        dp[i] = -1;
  
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            nCr[i][j] = -1;
  
    int currLog2 = -1;
    int currPower2 = 1;
  
    for (int i = 1; i <= n; i++) {
        if (currPower2 == i) {
            currLog2++;
            currPower2 *= 2;
        }
        logt[i] = currLog2;
    }
  
    return numberOfHeaps(n) % mod;
}
