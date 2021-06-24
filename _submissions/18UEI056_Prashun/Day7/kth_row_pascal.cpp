vector<int> Solution::getRow(int A) {
    /*vector<int>ps;vector<vector<int>>ans;
    if(A==0) return {1};
    if(A==1) return {1,1};
    ans[1].push_back(1);
    ans[1].push_back(1);
    for(int k=1;k<A;k++)
    { ans[k+1].push_back(1);
       for(int i=0;i<ans[k].size();i++)
       { if(i+1<ans[k].size())
         { int temp=ans[k][i]+ans[k][i+1];
         ans[k+1].push_back(temp);
          }
        }
      ans[k+1].push_back(1);
    }
    for(int i=0;i<ans[A].size();i++)
    { ps.push_back(ans[A][i]);
    }
    return ps;*/
vector<int>ans;
for(int i=0;i<=A;i++)
{ vector<int>tmp(i+1);
    for(int j=0;j<i+1;j++)
    { if(j==0 || j==i)
        tmp[j]=1;
        else
        tmp[j]=ans[j-1]+ans[j];
    }
    ans=tmp;
}
return ans;
}
