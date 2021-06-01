int Solution::nchoc(int A, vector<int> &B) {
    int n=B.size();
    long long int count=0;
    priority_queue<long long int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(B[i]);
        // sort(B.begin(),B.end());
        // count+=B[n-1]%1000000007;
        // B[n-1]=B[n-1]/2;
    }
    for(int i=0;i<A;i++)
    {    long long int a=pq.top();
        count+=a%1000000007;
        pq.push(a/2);
        pq.pop();
    }
    return count%1000000007;
}
