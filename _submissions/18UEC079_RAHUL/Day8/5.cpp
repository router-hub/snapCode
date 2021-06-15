int Solution::singleNumber(const vector<int> &A) {
    int xorr=0;
    for(int i=0;i<A.size();i++)
    {
        xorr^=A[i];
    }
    return xorr;
}
