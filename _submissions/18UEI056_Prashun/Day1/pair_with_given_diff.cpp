/*
Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.
*/
//code
int Solution::solve(vector<int> &A, int B) {
    int diff=0;
    int n=A.size();
    sort(A.begin(),A.end());
    int i=0,j=1;
    while(i<n && j<n)
    {diff=A[j]-A[i];
    if(i!=j && diff==B)
    return 1;
    else if(diff<B) j++;
    else i++;
    }
    return 0;
    
}
