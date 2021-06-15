void subsetsWithDupUtil(vector<int>&A,vector<vector<int>>&ans,vector<int>&subset,int index)
{
   ans.push_back(subset);
   for(int i=index;i<A.size();i++)
   {
       if(i>index && A[i]==A[i-1])
       continue;
       subset.push_back(A[i]);
       subsetsWithDupUtil(A,ans,subset,i+1);
       subset.pop_back();
   }
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int> >ans;
    vector<int>subset;
    subsetsWithDupUtil(A,ans,subset,0);
    vector<vector<int>> res=ans;
    ans.clear();
    return res;
}
