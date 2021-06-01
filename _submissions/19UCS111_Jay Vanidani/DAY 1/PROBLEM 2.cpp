/*
DAY-1:
PROBLEM 2:PRIME SUM
LINK:https:https://www.interviewbit.com/problems/prime-sum/
*/
vector<int> Solution::primesum(int A) 
{
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
    //Printing result
    for(int i=2;i<A;i++)
    {
        if(primes[i]&&primes[A-i])
        {
            result.push_back(i);
            result.push_back(A-i);
            return result;
        }
    }
}

