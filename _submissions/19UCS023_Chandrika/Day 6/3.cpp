void search(const vector<int>&A,int B,int st,int ed,vector<int>&ans)
{
  if(st>ed)
  {
      return;
  }
  else
  {
      int mid=st+(ed-st)/2;
      if(A[mid]==B)
      {
          if(ans[0]==-1)
          {
              ans[0]=mid;
          }
          else{
              ans[0]=min(ans[0],mid);
          }
          search(A,B,mid+1,ed,ans);
          ans[1]=max(mid,ans[1]);
          search(A,B,st,mid-1,ans);
      }
      else
      {
          if(A[mid]<B)
          {
              search(A,B,mid+1,ed,ans);
          }
          else
          {
              search(A,B,st,mid-1,ans);
          }
      }
  }
}
vector<int> Solution::searchRange(const vector<int> &A, int B) {
int n=A.size();
vector<int>ans(2);
ans[0]=-1;
ans[1]=-1;
search(A,B,0,n-1,ans);
return ans;
}
