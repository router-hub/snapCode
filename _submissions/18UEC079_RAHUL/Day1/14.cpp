int Solution::maxp3(vector<int> &A) {
    
    sort(A.begin(),A.end());
    int n=A.size();
    long long int a,b;
    a=A[0]*A[1]*A[n-1];
    b=A[n-1]*A[n-2]*A[n-3];
    return max(a,b);
}
