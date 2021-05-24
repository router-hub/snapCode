bool checkPrime(int n)
{
    for(int i =2;i<=sqrt(n);i++)
        if(n %i ==0)
            return false;
    return true;
}

vector<int> Solution::primesum(int A) 
{
    vector<int> arr;
    for(int i =2;i<=(A);i++)
    {
        if (checkPrime(i))
        {
            if(checkPrime(A-i))
            {
                arr.push_back(i);
                arr.push_back(A-i);
                return arr;
            }
        }
    }
}
