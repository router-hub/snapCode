
void findAllSubs(int ind, vector<int>& a, vector<vector<int>>& res, vector<int>& sub) {
    res.push_back(sub);
    for(int i = ind; i<a.size(); ++i) {
        sub.push_back(a[i]);
        findAllSubs(i+1, a, res, sub);
        sub.pop_back();
    }
    return;
}


vector<vector<int> > Solution::subsets(vector<int> &a) {
    int n = a.size();
    vector<vector<int>> res;
    vector<int> sub;
    sort(a.begin(), a.end());
    int ind = 0;
    findAllSubs(ind, a, res, sub);
    return res;
}
