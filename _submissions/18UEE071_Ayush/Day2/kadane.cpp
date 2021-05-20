int Solution::maxSubArray(const vector<int> &arr) 
{
    int max_sum_so_far = INT32_MIN;
    int max_ending_here = 0;
    bool flag = true;
    
    for(int c:arr)
    {
        if(c>=0)
        {
            flag = false;
        }
    }
    if(flag)
    {
        int max = arr[0];
        for (int c: arr)
        {
            if (c>max)
            {
                max =c;
            }
        }
        return max;
    }
    
    if(arr.size() == 1)
    {
        return arr[0];
    }
    
    for(int c: arr)
    {
        max_ending_here+= c;
        if(max_ending_here<0)
        {
            max_ending_here = 0;
        }
        if(max_sum_so_far<max_ending_here)
        {
            max_sum_so_far = max_ending_here;

        }
    }

    
    return max_sum_so_far;
}
