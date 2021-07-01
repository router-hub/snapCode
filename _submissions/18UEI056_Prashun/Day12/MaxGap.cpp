int Solution::maximumGap(const vector<int> &A) {
    vector<int>v;
    v=A;
    if(A.size()<2)
    return 0;
    sort(v.begin(),v.end());
    int ans=INT_MIN;
    for(int i=0;i<A.size()-1;i++)
    {
        ans=max(ans,(v[i+1]-v[i]));
    }
    return ans;
}
