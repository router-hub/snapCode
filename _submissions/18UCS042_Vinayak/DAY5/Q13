string a,b;
vector<vector<int>> dp;
int dist(int n, int m){
    if(m==-1)return 1;
    if(n==-1)return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(a[n]==b[m])  
        return dp[n][m] = dist(n-1,m-1)+dist(n-1,m);
    else            
        return dp[n][m] = dist(n-1,m);
}
int Solution::numDistinct(string A, string B) {
    int n = A.length();
    a = A;
    int m = B.length();
    b = B;
    dp.clear(); 
    dp.resize(n,vector<int>(m,-1));
    return dist(n-1,m-1);
}