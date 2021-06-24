int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    return A[0]+A[A.size()-1];
}
