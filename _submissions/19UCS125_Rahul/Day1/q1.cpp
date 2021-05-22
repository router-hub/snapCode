int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int minStep = 0;
    for(int i=1; i<A.size(); ++i) {
        int xt = abs(A[i] - A[i-1]);
        int yt = abs(B[i] - B[i-1]);
        minStep += max(xt, yt);
    }
    return minStep;
}