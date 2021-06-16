bool check(int b, int c, vector<vector<int> > &p){
    int n = p[b].size();
    for(int i=0; i<n; i++){
        if(p[b][i]==c)return false;
        if(!check(p[b][i],c,p))return false;
    }
    return true;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    vector<vector<int> > p(A+1,vector<int> (0,0));
    int n = B.size();
    for(int i=0; i<n; i++){
          p[C[i]].push_back(B[i]);
        if(!check(B[i],C[i],p))return 0;
      
    }
    return 1;
}
