vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int>ans;
    map<int,int>m;
    // sort(A.begin(),end());
    for(int i=0;i<A.size();i++)
    { int diff=B-A[i];
    auto itr=m.find(diff);
     if(itr!=m.end())
      {
          ans.push_back(itr->second+1);
          ans.push_back(i+1);
          return ans;
      }
      m.insert({A[i],i});
    }
    return ans;
}
