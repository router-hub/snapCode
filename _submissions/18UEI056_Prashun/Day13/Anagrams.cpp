vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int>>m;
    vector<vector<int>>ans;
    
    for(int i=0;i<A.size();i++)
    { string str=A[i];
    sort(str.begin(),str.end());
    m[str].push_back(i+1);
    }
    for(auto it=m.begin();it!=m.end();it++)
     {  ans.push_back({it->second});
     }
     return ans;
}
