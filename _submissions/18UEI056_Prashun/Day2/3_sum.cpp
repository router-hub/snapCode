/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.
*/
//code
int Solution::threeSumClosest(vector<int> &A, int B) {
sort(A.begin(),A.end());
int n=A.size()-1;
long mini=1000000000;//for larger test cases
int res=0;
for(int i=0;i<=n-2;i++)
{ int lo=i+1,hi=n;
while(lo<hi)
{ res=(long)A[i]+A[lo]+A[hi];
if(res==B) return res;
if(abs(B-res)<abs(B-mini)) mini=res;
else if(res>B) hi--;
else
lo++;
}    
}
    return mini;
    }
