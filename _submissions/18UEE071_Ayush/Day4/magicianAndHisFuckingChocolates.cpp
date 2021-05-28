#define MOD 1000000007
int Solution::nchoc(int A, vector<int> &arr) 
{
    priority_queue<int> maxHeap;
    for(auto x: arr)
        maxHeap.push(x);
    
    int count = 0;
    
    while(!maxHeap.empty() and A--)
    {
        int top = maxHeap.top();
        maxHeap.pop();
        
        count= count%MOD+(top%MOD);
        maxHeap.push(floor(top/2));
    }
    return count%MOD;
}
