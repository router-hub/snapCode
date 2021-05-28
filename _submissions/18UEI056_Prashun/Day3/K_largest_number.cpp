/*
Given an 1D integer array A of size N you have to find and return the B largest elements of the array A.
*/

//code
vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq;
     vector<int>ans;
    if(A.size()==0 || A.size()<B) return A;
    for(int i=0;i<A.size();i++)
    {
        pq.push(A[i]);
    }
   
    while(B)
    {
        int x=pq.top();
        ans.push_back(x);
        pq.pop();
        B--;
    }
    return ans;
}
