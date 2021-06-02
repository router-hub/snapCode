/*Two pointer Approach*/
vector<int> Solution::lszero(vector<int> &A) {
    vector<int> ans;
    int curr_l=-1,curr_r=-1,max_l=-1,max_r=-1;
    int n=A.size();
    for(int i=0;i<n;i++)
    {
        curr_l=-1,curr_r=-1;
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+A[j];
            if(sum==0)
            {
                curr_l=i;
                curr_r=j+1;
                if(curr_r-curr_l>max_r-max_l)
                {
                    max_l=curr_l;
                    max_r=curr_r;
                }
            }} }
    for(int i=max_l;i<max_r;i++)
    {
        ans.push_back(A[i]);
    }
    return ans;
    
}
