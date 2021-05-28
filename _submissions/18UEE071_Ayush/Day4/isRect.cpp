int Solution::solve(int A, int B, int C, int D) 
{
    unordered_set<int> hashset;
    
    vector<int> arr{A,B,C,D};
    
    for(auto x: arr)
    {
        if(x == 0) return 0;
        if(hashset.count(x))
            hashset.erase(x);
        else
            hashset.insert(x);
    }
    return hashset.size() == 0;
}
