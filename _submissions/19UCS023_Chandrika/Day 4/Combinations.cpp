void subsets(vector<vector<int>>&ans,int index,int A,int B,vector<int>&curr)
{
  if(curr.size()==B)//current subset is of size B,then push the subset into the ans vector
  {
      ans.push_back(curr);
      return;
  }
  for(int i=index;i<=A;i++)
  {
      curr.push_back(i);
      subsets(ans,i+1,A,B,curr);
      curr.pop_back();
  }
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int> >ans;
    vector<int>curr;
    subsets(ans,1,A,B,curr);
    return ans;
    
}
