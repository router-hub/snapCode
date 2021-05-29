vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
    for(int i=0;i<A.size();i++)
    pq.push(A[i]);
    vector<int>ans;
    while(B--)
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
