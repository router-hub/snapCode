int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int>q;
    for(int i=0;i<B.size();i++)
    q.push(B[i]);
    long long int maxChoc=0;
    while(A--)
    {
    int topEle=q.top();
    q.pop();
    maxChoc+=topEle;
    q.push(floor(topEle/2));
    }
    return maxChoc%1000000007;
}
