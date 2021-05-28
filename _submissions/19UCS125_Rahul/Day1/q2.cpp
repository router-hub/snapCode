vector<int> ans(2, 0);
vector<int> Solution::primesum(int A) {
    if(A % 2 != 0) {
        ans[0] = 2;
        ans[1] = A - 2;
    }
    else {
        vector<bool> prime(A, true);
        prime[0] = prime[1] = false;
        for(int i=2; i*i < A; ++i)
        {
            if(prime[i]==true)
            {
                for(int p=i*i; p<A; p+=i)
                {
                    prime[p]=false;
                }
            }
        }
        for(int i=2; i<A; ++i) {
            if(prime[i] && prime[A-i]) {
                ans[0] = i;
                ans[1] = A - i;
                break;
            }
        }
    }
    return ans;
}