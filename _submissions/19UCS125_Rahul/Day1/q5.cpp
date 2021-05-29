int Solution::numSetBits(unsigned int A) {
    int cnt = 0;
    while(A != 0) {
        A = (A & (A - 1));
        cnt++;
    }
    return cnt;
}