int Solution::nTriang(vector<int> &A) {
    
     /* int n=A.size(); 
  
    sort(A.begin(), A.end());  
  
    int i,j,k,c = 0; 
      
  for(i=0;i<n-2;i++)
    {
        j=i+1;
        k=j+1;
        while(j!=n-1&&k!=n)
        {
            while(k!=n)
            {
                if(A[i]+A[j]>A[k])
                {
                    c++;
                }
                k++;
            }
            j++;
            k=j+1;
        }
    }
    
    return c;
    */
    sort(A.begin(),A.end());
int n=A.size();
long long cnt=0;
for(int i=n-1;i>=2;i--)
{
    int l =0;int r =i-1;
    while(l<r)
    {
        if(A[l]+A[r]>A[i])
        {cnt=cnt+r-l;
         cnt=cnt%1000000007;
         r--;
        }
        else l++;
    }
}
return cnt;
    
}
