int Solution::maxp3(vector<int> &A) {
    int n=A.size();
    int ans=0;
    sort(A.begin(),A.end(),greater<int>());
    int first_three_positive=A[0]*A[1]*A[2];
    int two_negative=A[n-1]*A[n-2]*A[0];
     ans=max(first_three_positive,two_negative);
    return ans;
    
}
