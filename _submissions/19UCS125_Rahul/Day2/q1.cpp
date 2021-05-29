int Solution::maxSubArray(const vector<int> &A) {
    int max_calc = INT_MIN, max_end = 0;
    for(int i=0; i<A.size(); ++i) {
        max_end += A[i];
        if(max_calc < max_end) {
            max_calc = max_end;
        }
        if(max_end < 0) {
            max_end = 0;
        }
    }
    return max_calc;
}