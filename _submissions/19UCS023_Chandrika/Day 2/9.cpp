void solve(vector<int>&A, vector<vector<int> >&ans, vector<int>&subset,int index,int B)
{
    int n=A.size();
    if (B == 0) 
    ans.push_back(subset);
    for (int i=index; i<n; ++i)
    {
        if (A[i] > B)
        break;
        subset.push_back(A[i]);
        solve(A,ans,subset,i,B-A[i]);
        subset.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> ans;
    vector<int>subset;
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());//to handle duplicates
    solve(A,ans,subset,0,B);
    return ans;
}
