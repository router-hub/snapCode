void backtrack(vector<int>&A,vector<vector<int>>&ans,vector<int>&temp,int start,int B)
{if(B<0)
    return;
if(B==0)
 {ans.push_back(temp);
     return;
 }
 for(int i=start;i<A.size();i++)
 { temp.push_back(A[i]);
 backtrack(A,ans,temp,i,B-A[i]);
     temp.pop_back();
 }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>>ans;
    vector<int>temp;
    sort(A.begin(),A.end());
    backtrack(A,ans,temp,0,B);
    set<vector<int>>s(ans.begin(),ans.end());
    ans.clear();
    for(auto it:s)
     {
         ans.push_back(it);
     }
     return ans;
}
