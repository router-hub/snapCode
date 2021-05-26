//We have to find 2 prime nos whose sum is a given even number. One way is to check for all the numbers from 2 to n whether num & A-num is prime or not. It will take O(n(n^0.5)) 
//complexity as checking will take O(n^0.5).Another method is to generate all prime nos till A by sieve of erastothenes that takes 0(A*log(logA)) & then do O(A) traversal
// to find whether num and A-num is prime or not
vector<int> Solution::primesum(int A) {
     vector<int>ans;
    if(A==0||A==1) //for avoiding runtime error as for 0 or 1 , it will not go inside any for loop & not return ans
     return ans;
    vector<bool>primes(A+1,true);//care on how to define the primes vector.Don't define it in array , it will give memory limit exceeded
    primes[0]=false; //as 0 and 1 are not primes
    primes[1]=false;
     //According to seive of erastothenes, we start from i=2 to square root(n) and keep on crossing multiples of i starting from i*i till n. The nos left at end that are not
     //crossed i.e. where primes[j] is false are primes 
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
