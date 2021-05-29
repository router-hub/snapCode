vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    vector<int> ans;
    priority_queue<int> pq;//max heap
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B.size();j++)
        {
            pq.push(A[i]+B[j]);//push all possible sum combinations in the max heap
        }
    }
    int count=0;
    int n=A.size();
    while(count<n)
    {
        ans.push_back(pq.top());
        pq.pop();
        count++;
    }
    return ans;
    
}
