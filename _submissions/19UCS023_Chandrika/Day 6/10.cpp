int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map<int,int>mp;
    for(int i=0;i<A.size();i++)
    {
        int n1=A[i]-B;
        int n2=B+A[i];
        if(mp.find(n1)!=mp.end())
        {
            return 1;
        }
        if(mp.find(n2)!=mp.end())
        {
            return 1;
        }
        mp[A[i]]=1;
    }
    return 0;
}
