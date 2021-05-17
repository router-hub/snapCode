/*
Given a matrix of integers A of size N x M in which each row is sorted.

Find an return the overall median of the matrix A.
*/

//code
int Solution::findMedian(vector<vector<int> > &A) {
    for(int i=A.size()-1;i>0;i--)
    {
        for(int j=0;j<A[i].size();j++)
         A[0].push_back(A[i][j]);
    A[i].clear();
    }
    sort(A[0].begin(),A[0].end());
    return A[0][(A[0].size()/2)];
}
