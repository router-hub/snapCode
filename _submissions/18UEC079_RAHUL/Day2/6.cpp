int Solution::threeSumClosest(vector<int> &nums, int target) {
    int diff = INT_MAX, sz = nums.size();
    sort(begin(nums), end(nums));
    for (int i = 0; i < sz && diff != 0; ++i) {
        int lo = i + 1, hi = sz - 1;
        while (lo < hi) {
            int sum = nums[i] + nums[lo] + nums[hi];
            if (abs(target - sum) < abs(diff))
                diff = target - sum;
            if (sum < target)
                ++lo;
            else
                --hi;
        }
    }
    return target - diff;
}
