vector<int> Solution::primesum(int A) {
  /*seive of eratosthenes*/
    vector<bool> primes(A);
    for(int i=0;i<A;i++)
    primes[i]=true;
    vector<int> result;
    
    for(int i=2;i<sqrt(A);i++)
    {
        for(int j=2;i*j<A;j++)
        {
            primes[i*j]=0;
        }
    }
    /*print the results*/
    for(int i=2;i<A;i++)
{
    if(primes[i] && primes[A-i])    
    {
        result.push_back(i);
        result.push_back(A-i);
        return result;
    }
} 
}
