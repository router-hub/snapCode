
int Solution::solve(vector<int> &A, int B) 
{
    unordered_set<int> hashset;
    bool containsDup = false;
    for (auto x: A)
        {
            if(hashset.count(x)) containsDup = true;
            hashset.insert(x);
        }
    if(!B and containsDup) return 1;
    else if(!B and !containsDup) return 0;
        
    for(auto x: A)
    {
        int req = x - B;
        if(hashset.count(req))
            return 1;
        
    }
    return 0;
}
