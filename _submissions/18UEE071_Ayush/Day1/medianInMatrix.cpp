int Solution::findMedian(vector<vector<int> > &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    int low = INT_MAX;
    int high = INT_MIN;

    for(int i=0;i<n;i++)
    {
        low = min(low, arr[i][0]);
        high = max(high, arr[i][m-1]);
    }

    int leftCount = (n*m+1)/2;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        int currentLeftCount = 0;
        for(int i=0;i<n;i++)
        {
            currentLeftCount+=( upper_bound(arr[i].begin(), arr[i].end(), mid) - arr[i].begin()); 
        }
        if(currentLeftCount < leftCount)
        {
            low = mid +1;
        }
        else
            high = mid-1;
    }
    return low;
}
