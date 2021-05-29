int Solution::candy(vector<int> &A) {
   
   // It cant pass some cases.
    // int n=A.size();
    // vector<int>ans(n,0);
    // int sum=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(i==0 )
    //     {
    //         if(A[0]<=A[1])
    //          ans[0]=1;
    //     }
    //     else if(i==n-1)
    //     {
    //         if(A[n-2]>=A[n-1])
    //          ans[n-1]=1;
    //     }
    //     else
    //     {
    //         if(A[i-1]>=A[i] && A[i+1]>=A[i])
    //         ans[i]=1;
    //     }
    // }
    //   for(int i=0;i<n;i++)
    //   {
    //       if(i==0 && ans[i]==0)
    //     {
    //         if(ans[i+1]!=0)
    //          ans[i]=1+ans[i+1];
    //     }
    //     else if(i==n-1 && ans[i]==0)
    //     {
    //          if(ans[i-1]!=0)
    //          ans[i]=1+ans[i-1];
    //     }
    //     else if(i!=0 && i!=n-1 && ans[i]==0)
    //     {
    //         if(A[i-1]<=A[i] && A[i+1]<=A[i])
    //       {
    //           if(ans[i-1]!=0 && ans[i+1]!=0)
    //             ans[i]=1+max(ans[i-1],ans[i+1]);
    //       }
            
    //         else if(A[i-1]<=A[i])
    //         {
    //              if(ans[i-1]!=0)
    //              ans[i]=1+ans[i-1];
    //         }
    //         else if( A[i+1]<=A[i])
    //       {
    //           if(ans[i+1]!=0)
    //          ans[i]=1+ans[i+1];
    //       }
    //     }
    //   }
      
      
    //   for(int i=n-1;i>=0;i--)
    //   {
    //       if(i==0 && ans[i]==0)
    //     {
    //         if(ans[i+1]!=0)
    //          ans[i]=1+ans[i+1];
    //     }
    //     else if(i==n-1 && ans[i]==0)
    //     {
    //          if(ans[i-1]!=0)
    //          ans[i]=1+ans[i-1];
    //     }
    //     else if(i!=0 && i!=n-1 && ans[i]==0)
    //     {
    //         if(A[i-1]<=A[i] && A[i+1]<=A[i])
    //       {
    //           if(ans[i-1]!=0 && ans[i+1]!=0)
    //             ans[i]=1+max(ans[i-1],ans[i+1]);
    //       }
            
    //         else if(A[i-1]<=A[i])
    //         {
    //              if(ans[i-1]!=0)
    //              ans[i]=1+ans[i-1];
    //         }
    //         else if( A[i+1]<=A[i])
    //       {
    //           if(ans[i+1]!=0)
    //          ans[i]=1+ans[i+1];
    //       }
    //     }
    //   }
    //   for(int i=0;i<n;i++)
    //     sum+=ans[i];
        
    //   return sum;
      
      vector<int>ratings=A;
      int candies = 0;
    int size = ratings.size();
    vector<int> lefttoright(size, 1);
    vector<int> righttoleft(size, 1);
    
    for (auto l = 1; l<size; ++l)
        if (ratings[l] > ratings[l-1])
            lefttoright[l] = lefttoright[l-1] + 1;
    
    for (auto r = size-2; r>=0; --r)
        if (ratings[r] > ratings[r+1])
            righttoleft[r] = righttoleft[r+1] + 1;
            
    for (auto i = 0; i<size; ++i)
        candies += max(lefttoright[i], righttoleft[i]);
        
    return candies;
}
