int Solution::repeatedNumber(const vector<int> &A) {
    vector<int>v(A.size(),0);
    for(int i=0;i<A.size();i++)
    {  v[A[i]]++;
        // if(s.find(A[i])!=s.end())
        if(v[A[i]]==2)
        return A[i];
        
        // s.insert(A[i]);
    }
    return -1;
}
