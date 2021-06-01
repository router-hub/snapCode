int Solution::maxArr(vector<int> &arr)
{
    int l = arr.size();
    int ans = INT_MIN;
    int min_ = INT_MAX;
    int max_ = INT_MIN;

    for (int i = 0; i < l; i++)
    {
        min_ = min(min_, arr[i] + i);
        max_ = max(max_, arr[i] + i);
    }
    ans = max(ans, abs(max_ - min_));

    min_ = INT_MAX;
    max_ = INT_MIN;

    for (int i = 0; i < l; i++)
    {
        min_ = min(min_, arr[i] - i);
        max_ = max(max_, arr[i] - i);
    }
    ans = max(ans, abs(max_ - min_));

    return ans;
}