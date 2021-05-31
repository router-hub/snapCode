int Solution::findMedian(vector<vector<int> > &mat) {
    int r = mat.size();
    int c = mat[0].size();
    int mn = INT_MAX, mx = INT_MIN;
        for(int i=0; i<r; ++i) {
            mn = min(mn, mat[i][0]);
            mx = max(mx, mat[i][c-1]);
        }
        
        int k = ((r*c)+1) / 2;
        while(mn < mx) {
            int cnt = 0;
            int mid = mn + ((mx - mn) / 2);
            for(int i=0; i<r; ++i) {
                cnt += upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin();
            }
            if(cnt < k) {
                mn = mid + 1;
            }
            else {
                mx = mid;
            }
        }
        return mn;
}