/*Given an array A, of N integers A.

Return the highest product possible by multiplying 3 numbers from the array.
*/

//code
int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    return max((A[0]*A[1]*A[n-1]),(A[n-2]*A[n-3]*A[n-1]));
    
}
