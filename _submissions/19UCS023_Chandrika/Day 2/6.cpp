int Solution::threeSumClosest(vector<int> &A, int B) {
sort(A.begin(),A.end());
int length=A.size();
long ans = 0;
long d = INT_MAX;
for(int i=0;i<length-1;i++)
{
    int l=i+1;
    int r = length-1;
    while(r>l)
    {
        long sum = (long)A[i]+(long)A[l]+(long)A[r];
        if(abs(sum-B)<d)
        {
            d= abs(sum-B);
            ans = sum;
        }
        if(sum>B)
        {
            r--;
        }
        else
        {
            l++;
        }
         }}
return ans;
}
