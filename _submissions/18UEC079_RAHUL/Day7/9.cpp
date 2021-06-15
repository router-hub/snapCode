void comb(int n, int k, int st, vector<vector<int> > &v, vector<int> v1)
{
    if(k == 0)
    {
        v.push_back(v1);
        return;
    }
    for(auto i=st; i<=n; i++)
    {
        v1.push_back(i);
        comb(n, k-1, i+1, v, v1);
        v1.pop_back();
    }
}
vector<vector<int> > Solution::combine(int A, int B) {
    
     vector<vector<int> > v;
    vector<int> v1;
    
    comb(A, B, 1, v, v1);
 
    
    return v;
}


