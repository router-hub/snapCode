void findAllSubsets(vector<int>&A,vector<int>&subs,vector<vector<int>> &allSubsets,int start){
    
    allSubsets.push_back(subs);
    
    for(int i=start;i<A.size();i++){
        subs.push_back(A[i]);
        findAllSubsets(A,subs,allSubsets,i+1);
        subs.pop_back();
    }
    
}


vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    
    vector<vector<int>> allSubsets;
    vector<int> subs;
    
    allSubsets.push_back({});
    findAllSubsets(A,subs,allSubsets,0);
    
    for(int i=0;i<allSubsets.size();i++){
        sort(allSubsets[i].begin(),allSubsets[i].end());
    }
    sort(allSubsets.begin(),allSubsets.end());
    allSubsets.erase(unique(allSubsets.begin(),allSubsets.end()),allSubsets.end());
    
    return allSubsets;
    
}
