vector<int> Solution::equal(vector<int> &A) {
    vector<int>sol;
    vector<vector<int>>ans;
    unordered_map<int,pair<int,int>>m;
    for(int i=0;i<A.size();i++)
    { for(int j=i+1;j<A.size();j++)
        { int sum=A[i]+A[j];
            m.insert({sum,{i,j}});
        }
    }
      for(int i=1;i<A.size();i++)
    { for(int j=i+1;j<A.size();j++)
       { int sum=A[i]+A[j];
           if(m.find(sum)!=m.end())
            { int a=m[sum].first;
                int b=m[sum].second;
                if(a<i &&b!=j && b!=i){
                    ans.push_back({a,b,i,j});
                }
            }
       }
    }
    sort(ans.begin(),ans.end());
    return ans[0];
}
