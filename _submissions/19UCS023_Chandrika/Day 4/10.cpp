vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    if(A.size()<4)
    {
        return ans;
    }
    for(int i=0;i<A.size()-3;i++)
    {
        if(i>0 && A[i]==A[i-1])
        continue;
        for(int j=i+1;j<A.size()-2;j++)
        {
            if(j>i+1 && A[j]==A[j-1])
            continue;
            int st=j+1;
            int ed=A.size()-1;
            while(st<ed)
            {
                int fourSum=A[j]+A[i]+A[st]+A[ed];
                if(fourSum==B)
                {
                    ans.push_back({A[i],A[j],A[st],A[ed]});
                    while(st<ed && A[st]==A[st+1])
                    st++;
                    while(st<ed && A[ed]==A[ed-1])
                    ed--;
                    st++;
                    ed--;
                }
                else if(fourSum<B)
                st++;
                else
                ed--;
            }}}
    return ans;
}
