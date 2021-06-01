vector<int> Solution::plusOne(vector<int> &A) {

 int carry=1;
 vector<int>v;
 int n=A.size();
 for(int i=n-1;i>=0;--i)
 {
     int sum=A[i]+carry;
     carry=sum/10;
     v.push_back(sum%10);
 }
 v.push_back(carry);
 int i=v.size()-1;
 vector<int>ans;
 while(i>=0 && v[i]==0)
 {
     i--;
 }
 while(i>=0)
 {
    ans.push_back(v[i]);
    i--;
 }
 return ans;

}
