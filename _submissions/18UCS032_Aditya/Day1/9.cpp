void generateSubset(vector<int>&a, int i, vector<vector<int>> &v,vector<int>&v1){
    
   v.push_back(v1);
   
   for(int p=i;p<a.size();p++){
       
       v1.push_back(a[p]);
       
       generateSubset(a,p+1,v,v1);
       
       v1.pop_back();
       
   }
    
    return;
    
}
vector<vector<int>> Solution::subsets(vector<int> &a) {
    sort(a.begin(),a.end());
    vector<vector<int>>v;
    vector<int>subset;
    generateSubset(a,0,v,subset);
    return v;
}
