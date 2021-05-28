int Solution::solve(vector<int> &A, int B) {
    unordered_set<int> us;
    if(B == 0) {
        for(int i=0; i<A.size(); ++i) {
            if(us.find(A[i]) != us.end()) {
                return 1;
            }
            us.insert(A[i]);
        }
        return 0;
    }
    else {
        for(int i=0; i<A.size(); ++i) {
            us.insert(A[i]);
        }
        for(int i=0; i<A.size(); ++i) {
            if(us.find(A[i] + B) != us.end()) {
                return 1;
            }
        }
        return 0;   
    }
}
