vector<vector<int> > Solution::threeSum(vector<int> &A) {
vector<vector<int>> ans;
sort(A.begin(),A.end());
long long int sum;
if(A.size()<3)
return {};
for(int i=0;i<A.size()-2;i++)
{   int l=i+1;
    int r=A.size()-1;
    while(l<r)
    {
     sum=(long long int)A[i]+(long long int)A[l]+(long long int)A[r];
    if(sum==0)
    {
        vector<int>res={A[i],A[l],A[r]};
       sort(res.begin(),res.end());
       ans.push_back(res);
        l++;
        r--;
    }
    else if(sum<0)
    {
    l++;
    }
    else
    {
    r--;   }
    }}
  sort(ans.begin(),ans.end()) ;
  ans.erase(unique(ans.begin(),ans.end()),ans.end());
  return ans;
}
