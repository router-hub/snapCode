int Solution::divide(int A, int B) {
     int n1 = A < 0, n2 = B < 0;
    long long int a = A, b = B;
    a = abs(a);
    b = abs(b);
    double da = log(a);
    double db = log(b);
    long long int ans = exp(da - db);
    if (n1 ^ n2)
        ans = -ans;
    if (ans > INT_MAX || ans < INT_MIN)
        return INT_MAX ;
    return ans;
}
