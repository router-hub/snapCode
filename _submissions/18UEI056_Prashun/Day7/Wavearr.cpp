vector<int> Solution::wave(vector<int> &A) {
sort(A.begin(),A.end());
int i=0;
while(i<A.size()-1)
{ swap(A[i],A[i+1]);
    i=i+2;
}
    return A;
}
