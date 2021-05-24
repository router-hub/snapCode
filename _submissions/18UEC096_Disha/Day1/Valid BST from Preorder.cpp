//We just have to check for every element ,first find it's next greater element then check if any element right to it's next greater element is lesser than the current element 
//checked as the next greater element marks the beginning of the right subtree and no element in right subtree can be lesser than root for a valid BST.
//We can also find next greater element for every element and then check for the above condition iteratively, it will take O(n^2) time complexity so we use stack's concept of
//finding next greater element in O(n) time complexity & checkf ro the condition.
int Solution::solve(vector<int> &A) {
    int root=INT_MIN;
    stack<int>st;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<root)
            return 0;
        while(!st.empty()&&st.top()<A[i])
        {
            root=st.top();
            st.pop();
        }
        st.push(A[i]);
    }
    return 1;
}
