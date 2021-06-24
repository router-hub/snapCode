int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int start=0,end=0,count=0,noz=0;
    int ans=INT_MIN;
    for(int end=0;end<n;end++)
    { if(A[end]==0)
        noz++;
        while(noz>B)
        {if(A[start]==0)
            {noz--;}
            start++;
        }
        ans=max(ans,end-start+1);
    }
    return ans;
}
