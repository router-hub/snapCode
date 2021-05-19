//We have to find 2 prime nos whose sum is a given even number. One way is to check for all the numbers from 2 to n whether num & A-num is prime or not. It will take O(n(n^0.5)) 
//complexity as checking will take O(n^0.5).Another method is to generate all prime nos till A by sieve of erastothenes that takes 0(A*log(logA)) & then do O(A) traversal
// to find whether num and A-num is prime or not
vector<int> Solution::primesum(int A) {
     vector<int>ans;
    if(A==0||A==1)
     return ans;
    vector<bool>primes(A+1,true);
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i*i<=A;i++)
    {
        if(primes[i]==true)
        {
            for(int j=i*i;j<=A;j+=i)
            {
                // cout<<i<<" "<<j<<endl;
                primes[j]=false;
            }
        }
    }
     
    for(int i=2;i<A;i++)
    {
        if(primes[i]&&primes[A-i])
        {
            // cout<<i<<endl;
           ans.push_back(i);
           ans.push_back(A-i);
           return ans;
        }
        
    }
  

}
