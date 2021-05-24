int Solution::maxp3(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int l = A.size();
    int pr1 = A[0]*A[1]*A[l-1];
    int pr2 = A[l-1]*A[l-2]*A[l-3];
    return max(pr1,pr2);
}
