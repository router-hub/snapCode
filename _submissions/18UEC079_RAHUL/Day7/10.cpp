int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    set<int>s;
    long long int count=0;
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }
     for(int i=0;i<n;i++){
         if(s.find(A[i]^B)!=s.end())
         count++;
     }
     return count/2;
}
