int Solution::hammingDistance(const vector<int> &A) {
   
   // O(n^2) -> TLE
    // int n=A.size();
    // long long int mod=1000000007;
    // int count=0,flag1=0,flag2=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         int c1=A[i],c2=A[j];
    //         while(c1!=0 || c2!=0)
    //       {   flag1=0,flag2=0;
    //           if(c1&1==1)
    //             flag1=1;
    //             c1=c1>>1;
    //           if(c2&1==1)
    //           flag2=1;
    //           c2=c2>>1;
    //           if(flag1!=flag2)
    //           count++;
              
    //           count=count%mod;
    //       }
        
    //     }
    // }
    // count=(2*count)%mod;
    // return count;
  long long  int ans = 0,n=A.size();
    for (int i = 0; i < 32; i++) 
	
	{	int count = 0;
		for (int j = 0; j < n; j++)
		{	if ((A[j] & (1 << i)))
				count++;
		    
		}

		ans += (count * (n - count) )% 1000000007;
	    //cout<<ans<<"s"<<endl;
	    
	}
    return 2*ans % 1000000007;
}
