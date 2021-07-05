int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    if(n<2)
     return 0;
    vector<pair<int,int>>ans;
    for(int i=0;i<A.size();i++)
    { ans.push_back({A[i],i});
    }
    int maxVal=INT_MAX;
    int maxAns=0;
    sort(ans.begin(),ans.end());
    
    for(int i=0;i<ans.size();i++)
    {if(ans[i].second<maxVal)
      {
          maxVal=ans[i].second;
      }
      maxAns=max(maxAns,ans[i].second-maxVal);
    }
    
    return maxAns;
}
