vector<int> Solution::subUnsort(vector<int> &A) {
    // vector<int>ans;
    // B=A;
    // sort(B.begin(),B.end());
    // for(int i=0;i<B.size();i++)
    // { if(A[i]!=B[i])
    //     ans.push_back(i);
    // }
    // if(ans.empty())
    // return {-1};
    // return {ans[0],ans[ans.size()-1]};
    int n=A.size(),l=n,r=0,mx=INT_MIN,mn=INT_MAX;
for(int i=0;i<n;i++){
    if(A[i]<mx)r=i;
    mx=max(A[i],mx);
}
for(int i=n-1;i>=0;i--){
    if(A[i]>mn)l=i;
    mn=min(mn,A[i]);
}
if(l==n)return {-1};
return {l,r};
    
}
