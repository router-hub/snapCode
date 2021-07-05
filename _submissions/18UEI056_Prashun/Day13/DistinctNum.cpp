vector<int> Solution::dNums(vector<int> &A, int B) {
    // int n=A.size();
    // if(B>n) return {};
    // unordered_map<int,int>m;
    // unordered_set<int>s;
    // vector<int>ans;
   /* for(int i=0;i<n-B+1;i++)
    { 
     for(int j=i;j<i+B;j++)
         {
             s.insert(A[j]);
         }
         if(!s.empty())
          ans.push_back(s.size());
    }*/
 unordered_map<int, int> mp;
    int n=A.size(), i=0, j=0, cnt=0;
    while (j < B)
        cnt += !mp[A[j++]]++;
    vector<int> ans={cnt};
    while (j < n)
        ans.push_back(cnt += !mp[A[j++]]++ - !--mp[A[i++]]);
    return ans;
}
