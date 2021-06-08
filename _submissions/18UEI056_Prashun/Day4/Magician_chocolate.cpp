#define mod 1000000007
int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<long long int>pq;
    for(int i=0;i<B.size();i++)
    pq.push(B[i]);
    long long int ans=0;
    while(A--)
    {long long int x=pq.top();
    pq.pop();
    pq.push(floor(x/2));
    ans+=x;
    }
    return ans%mod;
}
