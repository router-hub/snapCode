/*O(n^2)*/
int Solution::findMinXor(vector<int> &A) {
   int minXor=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int xorValue=A[i]^A[j];
            if(xorValue<minXor)
            {
                minXor=xorValue;
            }
        }
    }
    return minXor;
}
/*Optimal Solution O(n)*/
int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int minXor=INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        minXor=min(minXor,A[i]^A[i+1]);
    }
    return minXor;
}
