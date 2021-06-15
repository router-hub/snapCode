int Solution::solve(vector<int> &A, int B) {
    int st=0;
    int ed=0;
    int max_ones=0;
    int n=A.size();
    while(ed<n)
    {
       if(A[ed]==1)//valid window
        {
           max_ones=max(max_ones,ed-st+1); 
           ed++;
        }
        else if(A[ed]==0)
        {
            if(B>0)//valid window
            {
                B--;
                max_ones=max(max_ones,ed-st+1);
                ed++;
            }
            else//invalid window, more zeroes than k, update window by incrementing B and updating st ahead
            {
            if(A[st]==0)
            B++;
            st++; 
            }
        }
    }
        return max_ones;
}
