int Solution::majorityElement(const vector<int> &A) {

  unordered_map<int,int> ans;
  int LL=floor(A.size()/2);

  for(int i=0;i<A.size();i++){
      ans[A[i]]++;
  }

  for(auto i=ans.begin();i!=ans.end();i++){
      if(i->second>LL){
          return i->first;
      }
  }
}
