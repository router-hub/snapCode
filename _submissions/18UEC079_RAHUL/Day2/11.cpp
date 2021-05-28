vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    // TLE -> O(N^2)
    // vector<int>v,ans;
    // int n=A.size();
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         v.push_back(A[i]+B[j]);
    //     }
    // }
    // sort(v.begin(),v.end());
   
    // int i=v.size()-1;
    // while(ans.size()!=n)
    // {
    //     ans.push_back(v[i]);
    //     i--;
    // }
    // return ans;
    
    
    
     priority_queue<pair<int, pair<int, int> > > hp;
    set<pair<int, int> > S;
    int n = A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    hp.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
    S.insert(make_pair(n-1, n-1));

    vector<int> ans;
    int k=n;
    while(k--){
        pair<int, pair<int, int> > top = hp.top();
        hp.pop();
        ans.push_back(top.first);
        int L = top.second.first;
        int R = top.second.second;
        
        if( R>0 && L>=0  && S.find(make_pair(L,R-1)) == S.end() ){
            hp.push(make_pair(A[L]+B[R-1], make_pair(L,R-1)));
            S.insert(make_pair(L,R-1));
        }
        if( R>=0  && L>0 && S.find(make_pair(L-1, R))==S.end()){
            hp.push(make_pair(A[L-1]+B[R], make_pair(L-1,R)));
            S.insert(make_pair(L-1, R));
        }
    }
    return ans;
    
}
