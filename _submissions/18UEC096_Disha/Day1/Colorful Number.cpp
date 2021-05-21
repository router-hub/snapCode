//fairly easy ques, just keep on calculating product of all consecutive subsequences & if not already present in hashset, insert it otherwise return 0
int Solution::colorful(int A) {
    vector<int>nums;
    while(A)
    {
        int rem=A%10;
        nums.push_back(rem);
        A=A/10;
    }
    unordered_set<int>store;
    for(int i=0;i<nums.size();i++)
    {
        int prod=1;
        for(int j=i;j<nums.size();j++)
        {
            
            prod=prod*nums[j];
            if(store.find(prod)!=store.end())
                return 0;
            store.insert(prod);    
        }
       
    }
    return 1;
}
