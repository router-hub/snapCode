int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
int n=A.size();
if(A[n-1]==0)
return 1;

    for(int i=n-2;i>=0;i--)
    { if((A[i]==(n-i-1))&&A[i+1]>A[i])
        return 1;
    }
    return -1;
}
