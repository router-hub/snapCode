int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    int min=INT_MAX;int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(min>A[i][0])
        {
            min=A[i][0];
        }
        if(max<A[i][m-1])
        {
            max=A[i][m-1];
        }
    }
    int x=(n*m+1)/2;
    while(min<max)
    {
        int c=0;
        int mid=min+(max-min)/2;
        for(int i=0;i<n;i++)
        {
        c+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        if(c<x)
        {
            min=mid+1;
        }
        else
        {
            max=mid;
        }
        
    }
    return min;
}
