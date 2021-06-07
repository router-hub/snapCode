#define mod 1000000007

int Solution::nTriang(vector<int> &A) {
    
	//TIME LIMIT EXCEEDED FOR COMMENTED PART
    // int count=0,first,second,third;
    // sort(A.begin(),A.end());
    
    // for(int i=0;i<A.size();i++){
    //     for(int j=i+1;j<A.size();j++){
    //         for(int k=j+1;k<A.size();k++){
    //           first=A[i]+A[j];
    //           second=A[i]+A[k];
    //           third=A[j]+A[k];
               
    //           if(first>A[k] && second>A[j] && third>A[i]){
    //               count++;
    //           }
    //         }
    //     }
    // }
    
    // return count%mod;
    
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
         cnt=cnt%mod;
         r--;
        }
        else l++;
    }
}
return cnt;
}
