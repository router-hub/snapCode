//There are many ways to solve this problem.One is a naive approach to traverse the whole array once for every element & check whether the second element-first element =B . O(n^2)
//Another approach is to sort the array and binary search for A[i]-A[j]==B if the difference is less than B low++ and if greater then b high--.O(nlogn)
//Another optimised approach of O(n) time complexity is to keep pushing the current element in set while traversing & search for the second complement of the difference.
//If B is negative, x1-current element=B so x1=B+current element.If B is positive, current element-x2=B so x2=current element -B so there are two possibilities in difference
//& we need to take care of both so we search for A[i]+B and A[i]-B both. In sum, both the x1 and x2 will form same equation, but in difference the 2 eqn. differs from each other.
int Solution::solve(vector<int> &A, int B) {
    unordered_set<int>store;
    for(int i=0;i<A.size();i++)
    {
        if(store.find(A[i]+B)!=store.end()||store.find(A[i]-B)!=store.end())
            return 1;
        store.insert(A[i]);    
    }
    return 0;
}
