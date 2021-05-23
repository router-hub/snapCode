int Solution::divide(int dividend, int divisor)
{
    if (divisor == 0)
        return INT_MAX;
    if (divisor == 1)
        return dividend;
    if (divisor == -1)
        return (dividend == INT_MIN) ? INT_MAX : -dividend;
    if (dividend == divisor)
        return 1;
    if (divisor == INT_MIN)
        return 0;

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    return sign * exp(log(abs(dividend)) - log(abs(divisor)));
}
