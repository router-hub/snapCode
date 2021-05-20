void backtrack(vector<int>&A,vector<int>&temp,vector<vector<int>>&ans,int index)
{ ans.push_back(temp);
for(int i=index;i<A.size();i++)
{ temp.push_back(A[i]);
    backtrack(A,temp,ans,i+1);
    temp.pop_back();
}
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int>temp;
    vector<vector<int>>ans;
    sort(A.begin(),A.end());
    backtrack(A,temp,ans,0);
    return ans;
}
