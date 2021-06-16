int Solution::singleNumber(const vector<int> &A) {
    
     int result = 0;
    for (auto i=0; i<32; ++i) //works for any occurence of number but only on 32 bit system
    {
        int sum = 0;
        for (auto j=0; j<A.size(); ++j)
        {
            if ((A[j] >> i) & 1 == 1)
            {
                ++sum;
                sum %= 3;
            }
        }
        if (sum!=0)
            result |= sum << i;
    }
    return result;
}
