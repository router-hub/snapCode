vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    vector<vector<int>>ans;
    vector<string>s(A.begin(),A.end());
    unordered_map<string,vector<int>>m;
    int count=0;
    
    for(int i=0;i<s.size();i++){
       sort(s[i].begin(),s[i].end());
    }
    
    for(int i=0;i<s.size();i++){
       m[s[i]].push_back(i+1);
    }
    for(auto i=m.begin();i!=m.end();i++){
        
            ans.push_back(i->second);
        
    }
    
    return ans;
    
}
