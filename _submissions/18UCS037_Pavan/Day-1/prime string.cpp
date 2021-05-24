bool isprime(int i)
{
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
           return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> v;
    for(int i=2;i<=A/2;i++)
    {
        if(isprime(i)&&isprime(A-i))
        {
            v.push_back(i);
            v.push_back(A-i);
            return v;
            
        }
    }
}
