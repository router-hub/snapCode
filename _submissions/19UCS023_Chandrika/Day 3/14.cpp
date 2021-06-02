int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    vector<int>start(n,0);
    vector<int>endt(n,0);
    for(int i=0;i<n;i++)
    {
        start[i]=A[i][0];
        endt[i]=A[i][1];
    }
    sort(start.begin(),start.end());
    sort(endt.begin(),endt.end());
    int count=0;
    int i=0,j=0;
    int ans=INT_MIN;
    while(i<n && j<n)
    {
        if(start[i]<endt[j])
        {
            count++;
            i++;
        }
        else
        {
            j++;
            count--;
        }
        ans=max(ans,count);
    }
    return ans;
}
