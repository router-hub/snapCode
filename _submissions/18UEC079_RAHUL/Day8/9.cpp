  void back(  vector<vector<int>>&ans,vector<int>&subset,int i,vector<int>& nums)
    {
        if(i==nums.size())
        {ans.push_back(subset);
        return;}
        
        back(ans,subset,i+1,nums);
        
        subset.push_back(nums[i]);
         back(ans,subset,i+1,nums);
        subset.pop_back();
    }


vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    
     sort(A.begin(),A.end());
     vector<vector<int>>ans;
        vector<int>subset;
        
        back(ans,subset,0,A);
        
          sort(ans.begin(),ans.end());
          ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    
}
