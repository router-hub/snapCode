int Solution::solve(int A, vector<int> &B) {
//     int n=B.size();
//     vector<int>v(n);
//     v[0]=B[0];
//     map<long long int,long long int>m;
//     m[v[0]]=1;;
//     for(int i=1;i<n;i++)
//     {
//         v[i]+=v[i-1]+B[i];
//          m[v[i]]++;
//     }
//     long long int sum=v[n-1]/3;
//     if(v[n-1]%3!=0 )
//     return 0;
    
//     if(m.find(sum)==m.end() || m.find(2*sum)==m.end())
//       return 0;
    
      
//     if(sum==0)
//     {
//         long long int count=m[0];
//         if(count==3)
//          return 1;
//          long long int extra=m[0]-3;
         
//          long long int ans=(extra+1)*(extra+2)/2;
//          return ans;
//     }
    
//       bool f1=0,f2=0;
//      for(int i=0;i<n-1;i++)
//      {
//          if(f1==0 && v[i]==sum)
//          f1=1;
//          if(f1==1 && v[i]==2*sum)
//          {f2==1;
//          break;}
//      }
//      if(f2==0)
//      return 0;
    
//   long long int count1=m[sum];
//   long long int count2=m[2*sum];
    
//     return count1*count2;
    
     int sum = 0;
    for(int i = 0; i < A; i++) sum += B[i];
    if(sum % 3 != 0 ) return 0;
    int sum13rd = sum/3;
    int sum23rd = 2 * sum13rd;
    int currSum = 0;
    int g13rd = 0;
    int count = 0;
    for(int i = 0; i < A - 1; i++) {
        currSum += B[i];
        if(currSum == sum23rd) count += g13rd;
        if(currSum == sum13rd) g13rd++;
    }
    //rumming till only A-1 is important for sum = 0. nd so is order of g13rd++.
    return count;
    
}
