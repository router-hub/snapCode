vector<bool> isPrime(long n){
    vector<bool> prime(n+1,true);
    prime[0] = prime[1] = false;
    for(long i=2;i*i<=n;i++){
        if(prime[i]){
            for(long j=i*i;j<=n;j+=i){
                prime[j] = false;
            }
        }
    }
    return prime;
}

vector<int> Solution::primesum(int A) {
    vector<int> ans;
    vector<bool> prime = isPrime(A);
    for(int i=2;i<A;i++){
        if(prime[i] and prime[A-i]){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    return ans;
