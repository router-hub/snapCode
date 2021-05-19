void dfs( vector<vector<int>> &ans, vector<int> &curr, vector<int>&A,int index){
    
    ans.push_back(curr);
    
    for(int i=index;i<A.size();i++){
        curr.push_back(A[i]);
        dfs(ans,curr,A,i+1);
        
        curr.pop_back();
        
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    
    vector<int>curr;
    
    dfs(ans,curr,A,0);
    
    return ans;
    
    
}