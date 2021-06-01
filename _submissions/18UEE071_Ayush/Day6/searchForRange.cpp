vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> r;
    if(binary_search(A.begin(), A.end(), B)) {
        r.push_back(lower_bound(A.begin(), A.end(), B)-A.begin());
        r.push_back(upper_bound(A.begin(), A.end(), B)-A.begin()-1);
    }
    else {
        r.push_back(-1);
        r.push_back(-1);
    }
    return r;
}