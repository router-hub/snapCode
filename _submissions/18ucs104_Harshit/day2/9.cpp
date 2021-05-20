void dfs(vector<vector<int>> &ans,vector<int> &curr,vector<int>&A,int target,int index){
    
    if(target<0)
    return;
    if(target==0){
        ans.push_back(curr);
        return ;
    }
     while(index<A.size()&&target-A[index]>=0){
        
        curr.push_back(A[index]);
        dfs(ans,curr,A,target-A[index],index);
        index++;
        curr.pop_back();
        
    }
    
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
vector<int>curr;
vector<vector<int>> ans;

sort(A.begin(),A.end());
dfs(ans,curr,A,B,0);
sort(ans.begin(),ans.end());
return ans;
}