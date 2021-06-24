int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(),A.end());
sort(B.begin(),B.end());

int val=0;
    
for(int i=0;i<A.size();i++){
    val = max(val,abs(A[i]-B[i]));
}
return val;
}
