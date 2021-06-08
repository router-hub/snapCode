/*Brute Force Approach
int Solution::nTriang(vector<int> &A) {
   int n=A.size();
  sort(A.begin(),A.end());
   int count=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           for(int k=j+1;k<n;k++)
           {
               if(A[i]+A[j]>A[k] && A[i]+A[k]>A[j] && A[k]+A[j]>A[i])
               {
                   count++;
               }
           }
       }
   }
return count;
}
*/
int Solution::nTriang(vector<int> &A) {
    sort(A.begin(),A.end());
    long long int n=A.size();
    long long int mod=(long long int)1e9+7;
    long long int count=0;
    for(int end=n-1;end>=0;end--)
    {
        int start=0;
        int k=end-1;
    while(start<k)
    {
        long long int minSum=A[start]+A[k];
        long long int maxm=A[end];
        if(minSum>maxm)
        {
            count=(count+(k-start)%mod)%mod;
            k--;
            
        }
        else
        {
            start++;
        }
    }
    }
    return count;
}
 
